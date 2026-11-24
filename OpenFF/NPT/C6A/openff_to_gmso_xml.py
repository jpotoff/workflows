#!/usr/bin/env python
"""Build a GMSO force field XML for one molecule directly from OpenFF Interchange.

The molecule is parametrized with an OpenFF SMIRNOFF force field (e.g. openff-2.3.0.offxml)
through openff-interchange, and the assigned parameters are written as a GMSO XML that
MoSDeF-GOMC's Charmm writer can apply (forcefield_selection=<this xml>).

Must run in an environment with openff-toolkit, openff-interchange and RDKit
(e.g. the ``openff`` conda env), NOT the MoSDeF env:

    conda run -n openff python openff_to_gmso_xml.py --smiles CCCCCC --resname C6A \
        --offxml openff-2.3.0.offxml -o openff-2.3.0_C6A.xml

Atom typing
-----------
SMIRNOFF assigns parameters directly by SMIRKS, so there are no atom types. Here one
atom type is made per topological symmetry class (graph automorphism orbit) of the
molecule. Symmetry-equivalent atoms get identical SMIRNOFF parameters and (NAGL) charges,
so every bond/angle/dihedral parameter is uniquely defined by its type tuple, which is
what the CHARMM-style GOMC parameter file needs. Bonded terms are keyed by atom type
(type1..type4), and the atom class is the element.

Each type gets a foyer SMARTS definition: a heavy-atom tree rooted at the atom, grown
only as far as needed to tell that symmetry class apart from all others. Every atom in the
tree carries its element (#Z) and connectivity (X); hydrogens are left out of the tree so
foyer does not enumerate H permutations, keeping typing fast even for long chains. Each definition is checked
with RDKit to match exactly its own symmetry class before the XML is written.

Not supported (the script stops with an error): virtual sites, improper torsions
(GOMC/MoSDeF-GOMC handling not validated here), non-LJ vdW forms.
"""

import argparse
import datetime
import sys
from collections import defaultdict
from xml.sax.saxutils import quoteattr

from openff.interchange import Interchange
from openff.toolkit import ForceField, Molecule
from openff.units import unit
from rdkit import Chem

TOL = 1.0e-6  # tolerance for "identical" parameters within a type tuple


# ----------------------------------------------------------------------------
# symmetry classes and SMARTS definitions
# ----------------------------------------------------------------------------
def symmetry_classes(rdmol):
    """Return the symmetry class rank of each atom (equivalent atoms share a rank)."""
    return list(Chem.CanonicalRankAtoms(rdmol, breakTies=False))


def _atom_primitive(atom):
    """SMARTS primitive for one atom: element and connectivity (total neighbor count).

    Hydrogens are not written into the tree (only X, which includes them), which keeps
    foyer's subgraph matching from enumerating H permutations. Foyer does not implement
    recursive $() SMARTS, so no H-count primitive is used; the radius search plus the
    RDKit check guarantee the pattern is still specific to its symmetry class.
    """
    return f"[#{atom.GetAtomicNum()};X{atom.GetDegree()}]"


def _tree_smarts(rdmol, root, radius):
    """Heavy-atom BFS tree SMARTS rooted at ``root``, out to ``radius`` bonds.

    A hydrogen root is written as the H followed by the tree of its heavy neighbor.
    """
    root_atom = rdmol.GetAtomWithIdx(root)
    if root_atom.GetAtomicNum() == 1:
        heavy = [nb.GetIdx() for nb in root_atom.GetNeighbors()]
        if not heavy:  # H2 or a bare H
            return _atom_primitive(root_atom)
        return _atom_primitive(root_atom) + "~" + _tree_smarts(rdmol, heavy[0], radius - 1) \
            if radius > 0 else _atom_primitive(root_atom)

    visited = {root}

    def build(idx, depth):
        atom = rdmol.GetAtomWithIdx(idx)
        s = _atom_primitive(atom)
        if depth >= radius:
            return s
        children = [nb.GetIdx() for nb in atom.GetNeighbors()
                    if nb.GetAtomicNum() != 1 and nb.GetIdx() not in visited]
        visited.update(children)
        branches = [build(c, depth + 1) for c in children]
        for i, b in enumerate(branches):
            s += ("(~%s)" % b) if i < len(branches) - 1 else ("~%s" % b)
        return s

    return build(root, 0)


def _roots_matched(rdmol, smarts):
    patt = Chem.MolFromSmarts(smarts)
    if patt is None:
        raise ValueError(f"RDKit could not parse generated SMARTS: {smarts}")
    matches = rdmol.GetSubstructMatches(patt, uniquify=False, useChirality=False,
                                        maxMatches=1000000)
    return {m[0] for m in matches}


def smarts_for_classes(rdmol, classes):
    """Minimal-radius SMARTS per symmetry class, verified to match exactly that class."""
    members = defaultdict(set)
    for idx, c in enumerate(classes):
        members[c].add(idx)

    max_radius = rdmol.GetNumAtoms()
    result = {}
    for c, atoms in members.items():
        root = min(atoms)
        for radius in range(0, max_radius + 1):
            smarts = _tree_smarts(rdmol, root, radius)
            if _roots_matched(rdmol, smarts) == atoms:
                result[c] = smarts
                break
        else:
            raise RuntimeError(
                f"Could not build a SMARTS that separates atom {root} "
                f"({rdmol.GetAtomWithIdx(root).GetSymbol()}) from non-equivalent atoms. "
                "This can happen for some ring systems; this case is not handled.")
    return result


# ----------------------------------------------------------------------------
# parameter extraction from Interchange
# ----------------------------------------------------------------------------
def _q(quantity, units):
    return quantity.m_as(units)


def _same(a, b):
    return len(a) == len(b) and all(abs(x - y) <= TOL * max(1.0, abs(x), abs(y))
                                    for x, y in zip(a, b))


def _canonical(key):
    """Order a type tuple so that a bonded term and its reverse map to the same key."""
    key = tuple(key)
    return min(key, key[::-1])


def collect(ic, type_of):
    """Collect per-type and per-type-tuple parameters from the Interchange object."""
    n_atoms = len(type_of)

    # --- vdW (per atom) ---
    vdw = ic["vdW"]
    lj = [None] * n_atoms
    for key, pkey in vdw.key_map.items():
        p = vdw.potentials[pkey].parameters
        lj[key.atom_indices[0]] = (_q(p["sigma"], unit.angstrom),
                                   _q(p["epsilon"], unit.kilocalorie / unit.mole))

    # --- charges (per atom) ---
    charges = [None] * n_atoms
    for key, q in ic["Electrostatics"].charges.items():
        charges[key.atom_indices[0]] = q.m_as(unit.elementary_charge)
    if any(c is None for c in charges) or any(v is None for v in lj):
        raise RuntimeError("Some atoms have no charge or vdW parameters (virtual sites?).")

    atom_types = {}
    for idx, t in enumerate(type_of):
        atom_types.setdefault(t, {"atoms": [], "lj": [], "q": []})
        atom_types[t]["atoms"].append(idx)
        atom_types[t]["lj"].append(lj[idx])
        atom_types[t]["q"].append(charges[idx])
    for t, d in atom_types.items():
        for v in d["lj"][1:]:
            if not _same(v, d["lj"][0]):
                raise RuntimeError(f"Inconsistent LJ parameters within type {t}")
        spread = max(d["q"]) - min(d["q"])
        if spread > 1.0e-4:
            raise RuntimeError(f"Charges within symmetry class {t} differ by {spread:.2e} e; "
                               "the charge model is not symmetric for this molecule.")
        d["sigma"], d["epsilon"] = d["lj"][0]
        d["charge"] = sum(d["q"]) / len(d["q"])

    # --- bonds / angles ---
    def two_body(name, pnames, punits):
        coll = ic[name]
        out = {}
        for key, pkey in coll.key_map.items():
            p = coll.potentials[pkey].parameters
            vals = tuple(_q(p[n], u) for n, u in zip(pnames, punits))
            tkey = _canonical(type_of[i] for i in key.atom_indices)
            if tkey in out and not _same(out[tkey], vals):
                raise RuntimeError(f"{name}: type tuple {tkey} has two different parameter sets")
            out[tkey] = vals
        return out

    bonds = two_body("Bonds", ("k", "length"),
                     (unit.kilocalorie / unit.mole / unit.angstrom ** 2, unit.angstrom))
    angles = two_body("Angles", ("k", "angle"),
                      (unit.kilocalorie / unit.mole / unit.radian ** 2, unit.degree))

    # --- proper torsions (multi-term) ---
    coll = ic["ProperTorsions"]
    per_quad = defaultdict(list)
    for key, pkey in coll.key_map.items():
        p = coll.potentials[pkey].parameters
        idivf = float(p["idivf"].m) if "idivf" in p else 1.0
        per_quad[key.atom_indices].append((
            int(round(p["periodicity"].m)),
            _q(p["k"], unit.kilocalorie / unit.mole) / idivf,
            _q(p["phase"], unit.degree),
        ))
    dihedrals = {}
    for quad, terms in per_quad.items():
        terms = tuple(sorted(terms))
        tkey = _canonical(type_of[i] for i in quad)
        flat = tuple(x for term in terms for x in term)
        if tkey in dihedrals:
            old = tuple(x for term in dihedrals[tkey] for x in term)
            if not _same(old, flat):
                raise RuntimeError(f"ProperTorsions: type tuple {tkey} has two parameter sets")
        dihedrals[tkey] = terms

    return atom_types, bonds, angles, dihedrals


CHARGE_DECIMALS = 6  # MoSDeF-GOMC writes PSF charges with 6 decimals


def round_charges(atom_types, target):
    """Round type charges to CHARGE_DECIMALS and absorb the rounding residual.

    The residual (an integer number of 1e-6 e units) is spread over the types, largest
    first, as whole units per atom, so the molecule's net charge stays as close to the
    integer ``target`` as the type multiplicities allow (exact when a type of size 1
    exists, otherwise within a few 1e-6 e per molecule). Returns the final net charge.
    """
    scale = 10 ** CHARGE_DECIMALS
    units = {t: round(d["charge"] * scale) for t, d in atom_types.items()}
    resid = target * scale - sum(units[t] * len(d["atoms"]) for t, d in atom_types.items())
    for t, d in sorted(atom_types.items(), key=lambda kv: -len(kv[1]["atoms"])):
        n = len(d["atoms"])
        step = int(resid / n)  # truncate toward zero
        units[t] += step
        resid -= step * n
    for t, d in atom_types.items():
        d["charge"] = units[t] / scale
    return sum(d["charge"] * len(d["atoms"]) for d in atom_types.values())


# ----------------------------------------------------------------------------
# XML writer
# ----------------------------------------------------------------------------
def write_xml(path, ff_label, provenance, atom_types, bonds, angles, dihedrals,
              smarts, scale14_lj, scale14_elec):
    A = quoteattr
    lines = ['<?xml version="1.0" encoding="UTF-8"?>']
    lines.append("<!--")
    for k, v in provenance.items():
        lines.append(f"  {k}: {v}")
    lines.append("-->")
    lines.append(f'<ForceField name={A(ff_label)} version="0.0.1">')
    lines.append(f'  <FFMetaData electrostatics14Scale="{scale14_elec:.10g}" '
                 f'nonBonded14Scale="{scale14_lj:.10g}" combiningRule="lorentz">')
    lines.append('    <Units energy="kcal/mol" mass="amu" charge="elementary_charge" '
                 'distance="angstrom"/>')
    lines.append("  </FFMetaData>")

    lines.append('  <AtomTypes expression="4*epsilon*((sigma/r)**12 - (sigma/r)**6)">')
    lines.append('    <ParametersUnitDef parameter="epsilon" unit="kcal/mol"/>')
    lines.append('    <ParametersUnitDef parameter="sigma" unit="angstrom"/>')
    for t, d in atom_types.items():
        lines.append(
            f'    <AtomType name={A(t)} atomclass={A(d["element"])} element={A(d["element"])} '
            f'charge="{d["charge"]:.6f}" mass="{d["mass"]:.6f}" definition={A(smarts[t])} '
            f'description={A("atoms " + ",".join(str(i) for i in d["atoms"]) + " (0-based)")} '
            f'doi={A(ff_label)} overrides="">')
        lines.append("      <Parameters>")
        lines.append(f'        <Parameter name="epsilon" value="{d["epsilon"]:.8f}"/>')
        lines.append(f'        <Parameter name="sigma" value="{d["sigma"]:.8f}"/>')
        lines.append("      </Parameters>")
        lines.append("    </AtomType>")
    lines.append("  </AtomTypes>")

    # OpenFF harmonic convention: k/2 * (x - x_eq)**2 (GMSO converts to CHARMM Kb, Ktheta)
    lines.append('  <BondTypes expression="k/2 * (r-r_eq)**2">')
    lines.append('    <ParametersUnitDef parameter="r_eq" unit="angstrom"/>')
    lines.append('    <ParametersUnitDef parameter="k" unit="kcal/mol/angstrom**2"/>')
    for (t1, t2), (k, r0) in sorted(bonds.items()):
        lines.append(f'    <BondType name={A(f"BondType_Harmonic_{t1}_{t2}")} '
                     f'type1={A(t1)} type2={A(t2)}>')
        lines.append("      <Parameters>")
        lines.append(f'        <Parameter name="k" value="{k:.8f}"/>')
        lines.append(f'        <Parameter name="r_eq" value="{r0:.8f}"/>')
        lines.append("      </Parameters>")
        lines.append("    </BondType>")
    lines.append("  </BondTypes>")

    lines.append('  <AngleTypes expression="k/2 * (theta - theta_eq)**2">')
    lines.append('    <ParametersUnitDef parameter="theta_eq" unit="degree"/>')
    lines.append('    <ParametersUnitDef parameter="k" unit="kcal/mol/radian**2"/>')
    for (t1, t2, t3), (k, th0) in sorted(angles.items()):
        lines.append(f'    <AngleType name={A(f"AngleType_Harmonic_{t1}_{t2}_{t3}")} '
                     f'type1={A(t1)} type2={A(t2)} type3={A(t3)}>')
        lines.append("      <Parameters>")
        lines.append(f'        <Parameter name="k" value="{k:.8f}"/>')
        lines.append(f'        <Parameter name="theta_eq" value="{th0:.8f}"/>')
        lines.append("      </Parameters>")
        lines.append("    </AngleType>")
    lines.append("  </AngleTypes>")

    if dihedrals:
        lines.append('  <DihedralTypes expression="k * (1 + cos(n * phi - phi_eq))">')
        lines.append('    <ParametersUnitDef parameter="k" unit="kcal/mol"/>')
        lines.append('    <ParametersUnitDef parameter="n" unit="dimensionless"/>')
        lines.append('    <ParametersUnitDef parameter="phi_eq" unit="degree"/>')
        for (t1, t2, t3, t4), terms in sorted(dihedrals.items()):
            lines.append(f'    <DihedralType name={A(f"DihedralType_Periodic_Proper_{t1}_{t2}_{t3}_{t4}")} '
                         f'type1={A(t1)} type2={A(t2)} type3={A(t3)} type4={A(t4)}>')
            lines.append("      <Parameters>")
            for pname, col, fmt in (("n", 0, "{:d}"), ("k", 1, "{:.8f}"), ("phi_eq", 2, "{:.6f}")):
                lines.append(f'        <Parameter name="{pname}">')
                for term in terms:
                    lines.append(f"          <Value>{fmt.format(term[col])}</Value>")
                lines.append("        </Parameter>")
            lines.append("      </Parameters>")
            lines.append("    </DihedralType>")
        lines.append("  </DihedralTypes>")

    lines.append("</ForceField>")
    with open(path, "w") as f:
        f.write("\n".join(lines) + "\n")


# ----------------------------------------------------------------------------
def main(argv=None):
    ap = argparse.ArgumentParser(description=__doc__.split("\n\n")[0])
    src = ap.add_mutually_exclusive_group(required=True)
    src.add_argument("--smiles", help="molecule SMILES")
    src.add_argument("--molecule-file", help="molecule file readable by the OpenFF toolkit "
                     "(e.g. .sdf, .mol2 with bond orders)")
    ap.add_argument("--resname", required=True, help="residue name (for provenance/FF name)")
    ap.add_argument("--offxml", default="openff-2.3.0.offxml", help="SMIRNOFF force field")
    ap.add_argument("-o", "--output", required=True, help="output GMSO XML path")
    args = ap.parse_args(argv)

    if args.smiles:
        mol = Molecule.from_smiles(args.smiles, allow_undefined_stereo=True)
    else:
        mol = Molecule.from_file(args.molecule_file, allow_undefined_stereo=True)

    ff = ForceField(args.offxml)
    ic = Interchange.from_smirnoff(ff, [mol])

    # --- unsupported features ---
    if "VirtualSites" in ic.collections and len(ic["VirtualSites"].key_map) > 0:
        sys.exit("ERROR: the force field places virtual sites on this molecule; "
                 "GOMC/MoSDeF-GOMC cannot represent them.")
    if "ImproperTorsions" in ic.collections and len(ic["ImproperTorsions"].key_map) > 0:
        sys.exit("ERROR: this molecule has SMIRNOFF improper torsions; their conversion to "
                 "GOMC is not implemented/validated in this script.")
    vdw_expr = ic["vdW"].expression.replace(" ", "")
    if vdw_expr != "4*epsilon*((sigma/r)**12-(sigma/r)**6)":
        sys.exit(f"ERROR: unsupported vdW functional form: {ic['vdW'].expression}")
    if ic["vdW"].mixing_rule.lower() != "lorentz-berthelot":
        sys.exit(f"ERROR: unsupported mixing rule: {ic['vdW'].mixing_rule}")

    # --- atom types = symmetry classes ---
    rdmol = mol.to_rdkit()  # same atom order as the OpenFF molecule, explicit H
    classes = symmetry_classes(rdmol)
    # number types per element in order of first appearance, e.g. C1, C2, H1
    # (MoSDeF-GOMC prefixes the residue name itself and builds the short CHARMM type
    # names from the atom class, which is set to the element)
    name_of_class, per_element = {}, defaultdict(int)
    for idx, c in enumerate(classes):
        if c not in name_of_class:
            sym = rdmol.GetAtomWithIdx(idx).GetSymbol()
            per_element[sym] += 1
            name_of_class[c] = f"{sym}{per_element[sym]}"
    type_of = [name_of_class[c] for c in classes]

    class_smarts = smarts_for_classes(rdmol, classes)
    smarts = {name_of_class[c]: s for c, s in class_smarts.items()}

    atom_types, bonds, angles, dihedrals = collect(ic, type_of)
    for t, d in atom_types.items():
        a = mol.atoms[d["atoms"][0]]
        d["element"] = a.symbol
        d["mass"] = a.mass.m_as(unit.dalton)

    net = sum(d["charge"] * len(d["atoms"]) for d in atom_types.values())
    if abs(net - round(net)) > 1.0e-4:
        sys.exit(f"ERROR: net charge {net:.6f} is not an integer")
    net = round_charges(atom_types, int(round(net)))

    elec = ic["Electrostatics"]
    charge_methods = sorted({k.extras.get("partial_charge_method", k.extras.get("handler", "?"))
                             for k in elec.key_map.values()
                             if getattr(k, "extras", None)}) or ["library/other"]

    import openff.interchange
    import openff.toolkit
    provenance = {
        "generated": datetime.datetime.now().isoformat(timespec="seconds"),
        "generator": "openff_to_gmso_xml.py",
        "molecule": args.smiles or args.molecule_file,
        "resname": args.resname,
        "force field": args.offxml,
        "charge method": ", ".join(charge_methods),
        "openff-toolkit": openff.toolkit.__version__,
        "openff-interchange": openff.interchange.__version__,
        "OpenFF nonbonded": (f"vdW cutoff {ic['vdW'].cutoff}, switch width {ic['vdW'].switch_width}, "
                             f"{ic['vdW'].periodic_method}; electrostatics "
                             f"{ic['Electrostatics'].periodic_potential}"),
        "net charge": f"{net:.6f}",
        "note": "H-bond constraints in the OpenFF force field are not represented; "
                "bonds are written as flexible harmonic terms.",
    }

    write_xml(args.output, f"{args.offxml.replace('.offxml', '')}-{args.resname}", provenance,
              atom_types, bonds, angles, dihedrals, smarts,
              ic["vdW"].scale_14, ic["Electrostatics"].scale_14)

    print(f"Wrote {args.output}: {len(atom_types)} atom types, {len(bonds)} bond types, "
          f"{len(angles)} angle types, {len(dihedrals)} dihedral types, net charge {net:.6f}")
    for t, d in atom_types.items():
        print(f"  {t:12s} n={len(d['atoms']):3d} q={d['charge']: .6f} "
              f"sigma={d['sigma']:.6f} eps={d['epsilon']:.6f}  {smarts[t]}")


if __name__ == "__main__":
    main()
