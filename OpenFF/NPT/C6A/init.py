"""Initialize signac statepoints for NPT simulations."""

import os
import signac

# *******************************************
# the main user varying state points (start)
# *******************************************
# Everything that can change from state point to state point goes here.
# Parameters that are constant from run to run are in config.yaml.

print("os.getcwd() = " + str(os.getcwd()))

pr_root = os.getcwd()
pr = signac.get_project(pr_root)

# Liquid n-hexane at 298 K and 1 bar.
# Experimental density at 298 K is ~0.655 g/cm^3, which for 500 molecules
# gives an equilibrium box length of ~47.8 A; start slightly dilute for packing.
temperatures_K =        [298]
pressures_bar =         [1.0]
box_0_molecules =       [500]
box_0_length_ang =      [ 50]   # initial box length (cubic)
rcutcoulomb_box_0_ang = [ 12]   # must be < half the (equilibrated) box length

replicas = [0]

# *******************************************
# the main user varying state points (end)
# *******************************************

total_statepoints = []
# zip links the lists so they move together, i.e. the first entry in each list
# is the set of conditions for the first state point, and so on.
# strict=True raises a ValueError if the lists have different lengths (typo check).
for temp_i, press_i, N0_i, L0_i, rc0_i in zip(
        temperatures_K,
        pressures_bar,
        box_0_molecules,
        box_0_length_ang,
        rcutcoulomb_box_0_ang,
        strict=True):

    for replica_i in replicas:
        statepoint = {
            "temperature": temp_i,
            "pressure": press_i,
            "box_0_molecules": N0_i,
            "box_0_length_ang": L0_i,
            "rcutcoulomb_box_0_ang": rc0_i,
            "replica_number": replica_i,
        }
        total_statepoints.append(statepoint)

print(f"Total statepoints generated: {len(total_statepoints)}")

# build the statepoints in the workspace
for sp in total_statepoints:
    job = pr.open_job(statepoint=sp).init()

    print(
        f"Initialized Job [{job.id}] -> T: {sp['temperature']} K, "
        f"P: {sp['pressure']} bar, "
        f"N0: {sp['box_0_molecules']}, L0: {sp['box_0_length_ang']} A, "
        f"RcutCoul0: {sp['rcutcoulomb_box_0_ang']} A, "
        f"Replica: {sp['replica_number']}"
    )
