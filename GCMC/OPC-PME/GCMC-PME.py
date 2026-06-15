"""GOMC's setup for signac, signac-flow, signac-dashboard for this study."""
# project.py

import os
import re
import shutil
import subprocess

import flow

import mbuild as mb
import mosdef_gomc.formats.gmso_charmm_writer as mf_charmm
import mosdef_gomc.formats.gmso_gomc_conf_writer as gomc_control
import numpy as np
import signac
import unyt as u
import pandas as pd
import math
from scipy import stats
from flow import FlowProject, aggregator
from flow.environment import DefaultSlurmEnvironment
import yaml

# =====================================================================
# LOAD GLOBAL CONSTANTS
# =====================================================================
with open("config.yaml", "r") as f:
    # safe_load prevents execution of arbitrary code embedded in YAML files
    GLOBAL_PARAMS = yaml.safe_load(f)


class Project(FlowProject):
    """Subclass of FlowProject to provide custom methods and attributes."""

    def __init__(self):
        super().__init__()

class Grid(DefaultSlurmEnvironment):  # Grid(StandardEnvironment):
    """Subclass of DefaultSlurmEnvironment for WSU's Grid cluster."""
    
    #uncomment for Grid
    #hostname_pattern = r".*\.grid\.wayne\.edu"
    #template = "grid.sh"
    template = "local.sh"




# ******************************************************
# users typical variables, but not all (start)
# ******************************************************
# set binary path to gomc binary files (the bin folder).
# If the gomc binary files are callable directly from the terminal without a path,
# please just enter and empty string (i.e., "" or '')

# Enter the GOMC binary path here (MANDATORY INFORMAION)
#gomc_binary_path = "/home6/ai8111/bin"
gomc_binary_path = "~/GOMC/PME2/GOMC/bin"
#local path
#gomc_binary_path = "~/PME/GOMC/bin/"


# number of simulation steps
gomc_steps_nvt_equilibration = 100000 # steps for NVT pre-equilibration step
gomc_steps_equilibration = 5000000 #  set value for paper = 60 * 10**6
gomc_steps_production    = 20000000 # set value for pauper = 60 * 10**6
console_output_freq = 10000 # Monte Carlo Steps between console output
pressure_calc_freq = 1000 # Monte Carlo Steps for pressure calculation
block_ave_output_freq =1000000 # Monte Carlo Steps between console output
coordinate_output_freq = 5000000 # # set value for paper = 50 * 10**3
coordinate_output_nvt_freq = 50000 # # set value for paper = 50 * 10**3
EqSteps_nvt = 10000 #MCS for NVT pre-equilibration
EqSteps = 1000000 # MCS for equilibration
AdjSteps = 1000 #MCS for adjusting max displacement, rotation, volume, etc.

# number of simulation steps
#gomc_steps_equilb_design_ensemble = 60 * 10**6 #  set value for paper = 60 * 10**6
#gomc_steps_production = 60 * 10**6 # set value for paper = 60 * 10**6

gomc_output_data_every_X_steps = 50 * 10**3 # # set value for paper = 50 * 10**3

# force field (FF) file for all simulations in that job
# Note: do not add extensions
gomc_ff_filename_str = "OPC_FF"

# initial mosdef structure and coordinates
# Note: do not add extensions
mosdef_structure_box_0_name_str = "initial_box_0"
mosdef_structure_box_1_name_str = "initial_box_1"

# NVT preequilibration to help stabilize GEMC simulations
gomc_nvt_equilb_control_file_name_str = "GEMC_nvt"
gomc_nvt_equilb_output_name_str="OPC_nvt"

# The equilb using the ensemble used for the simulation design, which
# includes the simulation runs GOMC control file input and simulation outputs
# Note: do not add extensions
gomc_equilb_control_file_name_str = "GCMC_equil"
gomc_equilb_output_name_str="OPC_equil"

# The production run using the ensemble used for the simulation design, which
# includes the simulation runs GOMC control file input and simulation outputs
# Note: do not add extensions
gomc_production_control_file_name_str = "GCMC_prod"
gomc_production_output_name_str="OPC_prod"

# Analysis (averages and std. devs. of  # all the replcates): 
# Output text (txt) file names for the averages and std. devs. of all the replcates, 
# including the extention (.txt, .dat, etc)
output_avg_std_of_replicates_txt_file_name_liq = "avg_over_replicates_box_liq.txt"
output_avg_std_of_replicates_txt_file_name_vap = "avg_over_replicates_box_vap.txt"

# Analysis (Critical and boiling point values):
# Output text (txt) file name for the Critical and Boiling point values of the system using the averages
# and std. devs. all the replcates, including the extention (.txt, .dat, etc)
output_critical_data_replicate_txt_file_name = "critical_points_all_replicates.txt"
output_critical_data_avg_std_of_replicates_txt_file_name = "critical_point_avg_over_replicates.txt"

output_boiling_data_replicate_txt_file_name = "boiling_point_all_replicates.txt"
output_boiling_data_avg_std_of_replicates_txt_file_name = "boiling_point_avg_over_replicates.txt"


walltime_mosdef_hr = 24
walltime_gomc_equilbrium_hr = 168
walltime_gomc_production_hr = 168
walltime_gomc_analysis_hr = 4
memory_needed = 1

# ******************************************************
# users typical variables, but not all (end)
# ******************************************************


# ******************************************************
# signac and GOMC-MOSDEF code (start)
# ******************************************************

# ******************************************************
# ******************************************************
# create some initial variable to be store in each jobs
# directory in an additional json file, and test
# to see if they are written (start).
# ******************************************************
# ******************************************************

# set the default directory
project_directory_path = str(os.getcwd())
print("project_directory_path = " +str(project_directory_path))

@Project.label
def part_1a_initial_data_input_to_json(job):
    """Check that the initial job data is written to the json files."""
    data_written_bool = False
    if job.isfile(f"{'signac_job_document.json'}"):
        data_written_bool = True

    return data_written_bool


@Project.post(part_1a_initial_data_input_to_json)
@Project.operation(directives=
    {
        "np": 1,
        "ngpu": 0,
        "memory": memory_needed,
        "walltime": walltime_mosdef_hr,
    }, with_job=True
)
def initial_parameters(job):
    """Set the initial job parameters into the jobs doc json file."""
    # select

    # set free energy data in doc
    # Free energy calcs
    # lamda generator

    # list replica seed numbers
    replica_no_to_seed_dict = {
        0: 0,
        1: 1,
        2: 2,
        3: 3,
        4: 4,
        5: 5,
        6: 6,
        7: 7,
        8: 8,
        9: 9,
        10: 10,
        11: 11,
        12: 12,
        13: 13,
        14: 14,
        15: 15,
        16: 16,
        17: 17,
        18: 18,
        19: 19,
        20: 20,
    }

    job.doc.replica_number = replica_no_to_seed_dict.get(
        int(job.sp.replica_number)
    )

    # gomc core and CPU or GPU
    job.doc.gomc_ncpu = 2  # 4 is optimal for water
    job.doc.gomc_ngpu = 0

    # get the gomc binary paths
    if job.doc.gomc_ngpu == 0:
        job.doc.gomc_cpu_or_gpu = "CPU"

    elif job.doc.gomc_ngpu == 1:
        job.doc.gomc_cpu_or_gpu = "GPU"

    else:
        raise ValueError(
            "The GOMC CPU and GPU can not be determined as force field (FF) is not available in the selection, "
            "or GPU selection is is not 0 or 1."
        )
    
    job.doc.gomc_nvt_equil_gomc_binary_file = f"GOMC_{job.doc.gomc_cpu_or_gpu}_GEMC"

    job.doc.gomc_equilb_design_ensemble_gomc_binary_file = f"GOMC_{job.doc.gomc_cpu_or_gpu}_GCMC"
    job.doc.gomc_production_ensemble_gomc_binary_file = f"GOMC_{job.doc.gomc_cpu_or_gpu}_GCMC"


# ******************************************************
# ******************************************************
# create some initial variable to be store in each jobs
# directory in an additional json file, and test
# to see if they are written (end).
# ******************************************************
# ******************************************************


# ******************************************************
# ******************************************************
# functions for selecting/grouping/aggregating in different ways (start)
# ******************************************************
# ******************************************************

def statepoint_without_replica(job):
    keys = sorted(tuple(i for i in job.sp.keys() if i not in {"replica_number"}))
    return [(key, job.sp[key]) for key in keys]

def statepoint_without_temperature(job):
    keys = sorted(tuple(i for i in job.sp.keys() if i not in {"temperature"}))
    return [(key, job.sp[key]) for key in keys]

# ******************************************************
# ******************************************************
# functions for selecting/grouping/aggregating in different ways (end)
# ******************************************************
# ******************************************************

# ******************************************************
# ******************************************************
# check if GOMC psf, pdb, and force field (FF) files were written (start)
# ******************************************************
# ******************************************************

# check if GOMC-MOSDEF wrote the gomc files
@Project.label
def mosdef_input_written(job):
    """Check that the mosdef files (psf, pdb, and force field (FF) files) are written ."""
    file_written_bool = False
    if (
        job.isfile(f"{gomc_ff_filename_str}.inp")
        and job.isfile(
            f"{mosdef_structure_box_0_name_str}.psf"
        )
        and job.isfile(
            f"{mosdef_structure_box_0_name_str}.pdb"
        )
    ):
        file_written_bool = True

    return file_written_bool


# ******************************************************
# ******************************************************
# check if GOMC psf, pdb, and FF files were written (end)
# ******************************************************
# ******************************************************

# ******************************************************
# ******************************************************
# check if GOMC control file was written (start)
# ******************************************************
# ******************************************************
# function for checking if the GOMC control file is written
def gomc_control_file_written(job, control_filename_str):
    """General check that the gomc control files are written."""
    file_written_bool = False
    control_file = f"{control_filename_str}.conf"

    if job.isfile(control_file):
        with open(job.fn(control_file), "r") as fp:
            out_gomc = fp.readlines()
            for i, line in enumerate(out_gomc):
                if "OutputName" in line:
                    split_move_line = line.split()
                    if split_move_line[0] == "OutputName":
                        file_written_bool = True

    return file_written_bool

# checking if the GOMC control file is written for the nvt equilb run with the selected ensemble
@Project.label
def part_2a_gomc_nvt_equilb_design_ensemble_control_file_written(job):
    """General check that the gomc_equilb_design_ensemble (run temperature) gomc control file is written."""
    return gomc_control_file_written(job, gomc_nvt_equilb_control_file_name_str)

# checking if the GOMC control file is written for the equilb run with the selected ensemble
@Project.label
def part_2b_gomc_equilb_design_ensemble_control_file_written(job):
    """General check that the gomc_equilb_design_ensemble (run temperature) gomc control file is written."""
    return gomc_control_file_written(job, gomc_equilb_control_file_name_str)


# checking if the GOMC control file is written for the production run
@Project.label
def part_2c_gomc_production_control_file_written(job):
    """General check that the gomc_production_control_file (run temperature) is written."""
    return gomc_control_file_written(job, gomc_production_control_file_name_str)

# ******************************************************
# ******************************************************
# check if GOMC control file was written (end)
# ******************************************************
# ******************************************************

# ******************************************************
# ******************************************************
# check if GOMC simulations started (start)
# ******************************************************
# ******************************************************
# function for checking if GOMC simulations are started
def gomc_simulation_started(job, control_filename_str):
    """General check to see if the gomc simulation is started."""
    output_started_bool = False
    if job.isfile("out_{}.dat".format(control_filename_str)):
        output_started_bool = True

    return output_started_bool


@Project.label
def part_3a_output_gomc_nvt_equilb_design_ensemble_started(job):
    """Check to see if the gomc_equilb_design_ensemble (set temperature) simulation is started."""
    return gomc_simulation_started(job, gomc_nvt_equilb_control_file_name_str)

# check if equilb_with design ensemble GOMC run is started by seeing if the GOMC consol file and the merged psf exist
@Project.label
def part_3b_output_gomc_equilb_design_ensemble_started(job):
    """Check to see if the gomc_equilb_design_ensemble (set temperature) simulation is started."""
    return gomc_simulation_started(job, gomc_equilb_control_file_name_str)

# check if production GOMC run is started by seeing if the GOMC consol file and the merged psf exist
@Project.label
def part_3c_output_gomc_production_run_started(job):
    """Check to see if the gomc production run (set temperature) simulation is started."""
    return gomc_simulation_started(job, gomc_production_control_file_name_str)


# ******************************************************
# ******************************************************
# check if GOMC simulations started (end)
# ******************************************************
# ******************************************************

# ******************************************************
# ******************************************************
# check if GOMC simulation are completed properly (start)
# ******************************************************
# ******************************************************
# function for checking if GOMC simulations are completed properly
def gomc_sim_completed_properly(job, control_filename_str):
    """General check to see if the gomc simulation was completed properly."""
    job_run_properly_bool = False
    output_log_file = "out_{}.dat".format(control_filename_str)
    if job.isfile(output_log_file):
        # with open(f"workspace/{job.id}/{output_log_file}", "r") as fp:
        #print(f"job.id = {job.id}")
        with open(job.fn(output_log_file), "r") as fp:
            out_gomc = fp.readlines()
            for i, line in enumerate(out_gomc):
                if "Completed" in line:
                    job_run_properly_bool = True
              #  if "Move" in line:
              #      split_move_line = line.split()
              #      if (
              #          split_move_line[0] == "Move"
              #          and split_move_line[1] == "Type"
              #          and split_move_line[2] == "Mol."
              #          and split_move_line[3] == "Kind"
              #      ):
              #          job_run_properly_bool = True
    else:
        job_run_properly_bool = False

    return job_run_properly_bool

# check if equilb selected ensemble GOMC run completed by checking the end of the GOMC consol file
@Project.label
def part_4a_job_gomc_nvt_equilb_design_ensemble_completed_properly(job):
    """Check to see if the gomc_equilb_design_ensemble (set temperature) simulation was completed properly."""
    return gomc_sim_completed_properly(job, gomc_nvt_equilb_control_file_name_str)

@Project.label
def part_4b_job_gomc_equilb_design_ensemble_completed_properly(job):
    """Check to see if the gomc_equilb_design_ensemble (set temperature) simulation was completed properly."""
    return gomc_sim_completed_properly(job, gomc_equilb_control_file_name_str)

# check if production GOMC run completed by checking the end of the GOMC consol file
@Project.label
def part_4c_job_production_run_completed_properly(job):
    """Check to see if the gomc production run (set temperature) simulation was completed properly."""
    return gomc_sim_completed_properly(job, gomc_production_control_file_name_str)

# check if analysis is done for the individual replicates wrote the gomc files
@Project.label
def part_5a_hist_files_transferred(job):
    histogram_dir = f"../../data{job.doc.replica_number}"
    #dest_dir=os.path.abspath(os.path.join(job.path,histogram_dir))
    #dest_dir=os.path.abspath(os.path.join(job.path,"../../data1"))
    pattern = re.compile(r"^(his|n1dis)\d+a\.dat$")

    files_to_check = [f for f in os.listdir(job.path) if pattern.match(f)]

    if not files_to_check:
        return False

    for filename in files_to_check:
        dest_file_path = os.path.join(histogram_dir,filename)

# Check 1: Does the file exist in data1?
        if not os.path.exists(dest_file_path):
            return False
# Check 2: is the file empty?
        if os.path.getsize(dest_file_path) == 0:
            return False

    return True


# check if analysis for averages of all the replicates is completed
#@Project.pre(part_5a_analysis_individual_simulation_averages_completed)
@Project.label
def part_5b_analysis_replica_averages_completed(*jobs):
    """Check that the individual simulation averages files are written ."""
    file_written_bool_list = []
    all_file_written_bool_pass = False
    for job in jobs:
        file_written_bool = False

        if (
            job.isfile(
                f"../../analysis/{output_avg_std_of_replicates_txt_file_name_liq}"
            )
            and job.isfile(
                f"../../analysis/{output_avg_std_of_replicates_txt_file_name_vap}"
            )
        ):
            file_written_bool = True

        file_written_bool_list.append(file_written_bool)

    if False not in file_written_bool_list:
        all_file_written_bool_pass = True

    return all_file_written_bool_pass

# check if analysis for critical points is completed
#@Project.pre(part_5a_analysis_individual_simulation_averages_completed)
#@Project.pre(part_5a_analysis_individual_simulation_averages_completed)
#@Project.pre(part_5b_analysis_replica_averages_completed)
@Project.label
def part_5c_analysis_critical_and_boiling_points_replicate_data_completed(*jobs):
    """Check that the critical and boiling point replicate file is written ."""
    file_written_bool_list = []
    all_file_written_bool_pass = False
    for job in jobs:
        file_written_bool = False

        if (
            job.isfile(
                f"../../analysis/{output_critical_data_replicate_txt_file_name}"
            ) \
                and
            job.isfile(
                f"../../analysis/{output_boiling_data_replicate_txt_file_name}"
            )
        ):
            file_written_bool = True

        file_written_bool_list.append(file_written_bool)

    if False not in file_written_bool_list:
        all_file_written_bool_pass = True

    return file_written_bool

# check if analysis for critical points is completed
#@Project.pre(part_5a_analysis_individual_simulation_averages_completed)
#@Project.pre(part_5a_analysis_individual_simulation_averages_completed)
#@Project.pre(part_5b_analysis_replica_averages_completed)
@Project.label
def part_5d_analysis_critical_and_boiling_points_avg_std_data_completed(*jobs):
    """Check that the avg and std dev critical and boiling point data file is written ."""
    file_written_bool_list = []
    all_file_written_bool_pass = False
    for job in jobs:
        file_written_bool = False

        if (
            job.isfile(
                f"../../analysis/{output_critical_data_avg_std_of_replicates_txt_file_name}"
            ) \
                and
                job.isfile(
                    f"../../analysis/{output_boiling_data_avg_std_of_replicates_txt_file_name}"
                )
        ):
            file_written_bool = True

        file_written_bool_list.append(file_written_bool)

    if False not in file_written_bool_list:
        all_file_written_bool_pass = True

    return file_written_bool


# ******************************************************
# ******************************************************
# check if GOMC simulation are completed properly (end)
# ******************************************************
# ******************************************************

# ******************************************************
# ******************************************************
# build system, with option to write the force field (force field (FF)), pdb, psf files.
# Note: this is needed to write GOMC control file, even if a restart (start)
# ******************************************************
# build system
def build_charmm(job, write_files=True):
    """Build the Charmm object and potentially write the pdb, psd, and force field (FF) files."""
    print("#**********************")
    print("Started: GOMC Charmm Object")
    print("#**********************")

    # Define molecules
    forcefield_files = '../../OPC-gmso.xml'
    molecule_A = mb.load('../../OPC.mol2')
    molecule_A.name = 'OPC'

    molecule_type_list = [molecule_A]
    #mol_fraction_molecule_A = 1.0
    #molecule_mol_fraction_list = [mol_fraction_molecule_A]
    #print('molecule_mol_fraction_list =  ' + str(molecule_mol_fraction_list))
    fixed_bonds_angles_list = [molecule_A.name]
    residues_list = [molecule_A.name]
    
    bead_to_atom_name_dict = {'_CH3': 'C', '_CH2': 'C', '_CH': 'C', '_HC': 'C'}

    #define number of molecules in the system and box length
    print(GLOBAL_PARAMS["box_0_length_ang"])
    box_0_length_ang = GLOBAL_PARAMS["box_0_length_ang"]
    box_1_length_ang = GLOBAL_PARAMS["box_1_length_ang"]
    box_0_molecules = job.sp.initial_molecules
    box_1_molecules = GLOBAL_PARAMS["box_1_molecules"]

    print('Running: liquid phase box packing')

    box_liq = mb.fill_box(compound=molecule_type_list,
                          n_compounds=box_0_molecules,seed=job.doc.replica_number,
                          box=[box_0_length_ang/10, box_0_length_ang/10, box_0_length_ang/10]
                          )
    print('Completed: liquid phase box packing')

    print('Running: vapor phase box packing')
    box_vap = mb.fill_box(compound=molecule_type_list,
                          n_compounds=box_1_molecules,seed=job.doc.replica_number,
                          box=[box_1_length_ang/10, box_1_length_ang/10, box_1_length_ang/10]
                          )

    print('Completed: vapor phase box packing')

    # calculate the actual molecular packing data

    print('Running: GOMC FF file, and the psf and pdb files')
    gomc_charmm = mf_charmm.Charmm(
        box_liq,
        mosdef_structure_box_0_name_str,
        structure_box_1=box_vap,
        filename_box_1=mosdef_structure_box_1_name_str,
        ff_filename=gomc_ff_filename_str,
        forcefield_selection=forcefield_files,
        residues=residues_list,
        bead_to_atom_name_dict=bead_to_atom_name_dict,
        gomc_fix_bonds_angles=fixed_bonds_angles_list,
    )

    if write_files == True:
        gomc_charmm.write_inp()

        gomc_charmm.write_psf()

        gomc_charmm.write_pdb()

    print('Completed: GOMC FF file, and the psf and pdb files')

    return gomc_charmm


# ******************************************************
# ******************************************************
# build system, with option to write the force field (FF), pdb, psf files.
# Note: this is needed to write GOMC control file, even if a restart (end)
# ******************************************************


# ******************************************************
# ******************************************************
# Creating GOMC files (pdb, psf, force field (FF), and gomc control files (start)
# ******************************************************
# ******************************************************
@Project.pre(part_1a_initial_data_input_to_json)
@Project.post(part_2a_gomc_nvt_equilb_design_ensemble_control_file_written)
@Project.post(part_2b_gomc_equilb_design_ensemble_control_file_written)
@Project.post(part_2c_gomc_production_control_file_written)
@Project.post(mosdef_input_written)
@Project.operation(directives=
    {
        "np": 1,
        "ngpu": 0,
        "memory": memory_needed,
        "walltime": walltime_mosdef_hr,
    }, with_job=True
)
def build_psf_pdb_ff_gomc_conf(job):
    """Build the Charmm object and write the pdb, psd, and force field (FF) files for all the simulations in the workspace."""
    gomc_charmm_object_with_files = build_charmm(job, write_files=True)

    # ******************************************************
    # common variables (start)
    # ******************************************************
    # variables from signac workspace
    
    production_temperature_K = job.sp.temperature* u.K
    chemical_potential = job.sp.chemical_potential*u.K
    run_number = int(job.sp.run_number)
    print("Chemical_Potential",chemical_potential)
    print("run_number = ",run_number)

    seed_no = job.doc.replica_number
    # these are parameters that might go into the init.py file
    # cutoff and tail correction
    Rcut_ang = GLOBAL_PARAMS["LJ_cutoff"]*u.angstrom
   # Rcut_ang = 9.0 * u.angstrom
    Rcut_low_ang = GLOBAL_PARAMS["Hard_cutoff"]*u.angstrom
    LRC = GLOBAL_PARAMS["Long_range_corrections"]
    Electrostatic_bool = GLOBAL_PARAMS["Electrostatic_bool"]
    Electrostatic_Method=GLOBAL_PARAMS["Electrostatic_Method"]
    PMESplineOrder= GLOBAL_PARAMS["PMESplineOrder"]
    PMEGridSpacing= GLOBAL_PARAMS["PMEGridSpacing"]
    PMERefreshFreq=GLOBAL_PARAMS["PMERefreshFreq"]
    Ewald_tol=0.00001
    Exclude = "1-4"
    RcutCoulomb_box_0=GLOBAL_PARAMS["Real_space_cutoff"] * u.angstrom
    RcutCoulomb_box_1=50.0 * u.angstrom


     # output all data and calc frequecy
    output_true_list_input = [
        True,
        int(gomc_output_data_every_X_steps),
    ]
    output_false_list_input = [
        False,
        int(gomc_output_data_every_X_steps),
    ]

    print("#**********************")
    print("Started: NVT Pre-equilibration GEMC-NVT GOMC control file writing")
    print("#**********************")
    output_file_prefix = gomc_nvt_equilb_output_name_str
    starting_control_file_name_str = gomc_charmm_object_with_files

# calc MC steps for gomc equilb
    MC_steps = int(gomc_steps_nvt_equilibration)
    Expert_bool = True
    # MC move ratios
    DisFreq = 0.50
    RotFreq = 0.50
    VolFreq = 0.00
    MultiParticleFreq=0.00
    RegrowthFreq = 0.00
    IntraSwapFreq = 0.00
    IntraMEMC_2Freq = 0.00
    MEMC_2LiqFreq = 0.0
    CrankShaftFreq = 0.00
    SwapFreq = 0.0
    MEMC_2Freq = 0.0
    #memc_move_data = [1, "F4A", ["C2","C3"], "C4A", ["C2","C3"]]
    #Exchange_volume = [3.0, 3.0, 5.0]

    gomc_control.write_gomc_control_file(
        starting_control_file_name_str,
        gomc_nvt_equilb_control_file_name_str,
        'GEMC_NVT',
        MC_steps,
        production_temperature_K,
        ff_psf_pdb_file_directory=None,
        check_input_files_exist=False,
        Parameters=None,
        Restart=False,
        Checkpoint=False,
        ExpertMode=Expert_bool,
        Coordinates_box_0=None,
        Structure_box_0=None,
        binCoordinates_box_0=None,
        extendedSystem_box_0=None,
        binVelocities_box_0=None,
        Coordinates_box_1=None,
        Structure_box_1=None,
        binCoordinates_box_1=None,
        extendedSystem_box_1=None,
        binVelocities_box_1=None,
        input_variables_dict={
            "PRNG": seed_no,
            "Potential": "VDW",
            "LRC": LRC,
            "Rcut": Rcut_ang,
            "RcutLow": Rcut_low_ang,
            "RcutCoulomb_box_0":RcutCoulomb_box_0,
            "RcutCoulomb_box_1":RcutCoulomb_box_1,
	        "ElectrostaticMethod":Electrostatic_Method,
	        "PMESplineOrder": PMESplineOrder,
            "PMEGridSpacing": PMEGridSpacing,
            "PMERefreshFreq": PMERefreshFreq,
            "ElectroStatic": Electrostatic_bool,
            "Tolerance": Ewald_tol,
            "VDWGeometricSigma": False,
            "Exclude": Exclude,
            "DisFreq": DisFreq,
            "VolFreq": VolFreq,
            "RotFreq": RotFreq,
            "MultiParticleFreq": MultiParticleFreq,
            "RegrowthFreq": RegrowthFreq,
            "IntraSwapFreq": IntraSwapFreq,
            "IntraMEMC-2Freq": IntraMEMC_2Freq,
            "CrankShaftFreq": CrankShaftFreq,
            "SwapFreq": SwapFreq,
            "MEMC-2Freq": MEMC_2Freq,
            "MEMC-2-LiqFreq": MEMC_2LiqFreq,
            #"ExchangeVolumeDim": [3.0, 3.0, 5.0],
            #"MEMC_DataInput": [memc_move_data],
            "OutputName": output_file_prefix,
            "EqSteps": EqSteps_nvt,
            "AdjSteps":AdjSteps,
            "PressureCalc": [False, pressure_calc_freq],
            "RestartFreq": [True, coordinate_output_nvt_freq],
            "CheckpointFreq": [True, coordinate_output_nvt_freq],
            "DCDFreq": [True, coordinate_output_nvt_freq],
            "ConsoleFreq": [True, console_output_freq],
            "BlockAverageFreq":[True, block_ave_output_freq],
            "HistogramFreq": output_false_list_input,
            "CoordinatesFreq": output_false_list_input,
            "CBMC_First": 12,
            "CBMC_Nth": 10,
            "CBMC_Ang": 50,
            "CBMC_Dih": 50,
        },
    )
    print("#**********************")
    print("Completed: pre-equilb GEMC-NVT GOMC control file writing")
    print("#**********************")

     # ******************************************************
    # equilb selected_ensemble, if NVT -> NPT - GOMC control file writing  (start)
    # Note: the control files are written for the max number of gomc_equilb_design_ensemble runs
    # so the Charmm object only needs created 1 time.
    # ******************************************************
    print("#**********************")
    print("Started: equilb GEMC-NVT GOMC control file writing")
    print("#**********************")
      # Set Monte Carlo steps for equilibration MC steps for gomc
    MC_steps = int(gomc_steps_equilibration)
    histogram_output=100000
    sample_freq = 500
    # MC move ratios
    DisFreq = 0.20
    RotFreq = 0.20
    VolFreq = 0.00
    MultiParticleFreq=0.0
    RegrowthFreq = 0.10
    IntraSwapFreq = 0.00
    IntraMEMC_2Freq = 0.00
    MEMC_2LiqFreq = 0.00
    CrankShaftFreq = 0.00
    SwapFreq = 0.50
    MEMC_2Freq = 0.0
    #memc_move_1 = [1, "F4A", ["C2","C3"], "C4A", ["C2","C3"]]
    #memc_move_2 = [1, "F4A", ["C2","C3"], "F2A", ["C1","C2"]]
    #memc_move_3 = [1, "F2A", ["C1","C2"], "C2A", ["C1","C2"]]
    #memc_move_4 = [1, "C4A", ["C2","C3"], "C2A", ["C1","C2"]]
    #memc_all_moves = [memc_move_1, memc_move_2, memc_move_3, memc_move_4]
    #Exchange_volume = [6.0, 6.0, 6.0]

    output_file_prefix = gomc_equilb_output_name_str
    starting_control_file_name_str = gomc_charmm_object_with_files
    restart_control_file_name_str = gomc_nvt_equilb_output_name_str
# setup file names for the second stage of the equilibration
    Coordinates_box_0 = "{}_BOX_0_restart.pdb".format(
        restart_control_file_name_str
    )   
    Structure_box_0 = "{}_BOX_0_restart.psf".format(
        restart_control_file_name_str
    )
    binCoordinates_box_0 = "{}_BOX_0_restart.coor".format(
        restart_control_file_name_str
    )
    extendedSystem_box_0 = "{}_BOX_0_restart.xsc".format(
        restart_control_file_name_str
    )
    Coordinates_box_1 = "{}_BOX_1_restart.pdb".format(
        restart_control_file_name_str
    )
    Structure_box_1 = "{}_BOX_1_restart.psf".format(
        restart_control_file_name_str
    )
    binCoordinates_box_1 = "{}_BOX_1_restart.coor".format(
        restart_control_file_name_str
    )
    extendedSystem_box_1 = "{}_BOX_1_restart.xsc".format(
        restart_control_file_name_str
    )
   
    gomc_control.write_gomc_control_file(
        starting_control_file_name_str,
        gomc_equilb_control_file_name_str,
        'GCMC',
        MC_steps,
        production_temperature_K,
        check_input_files_exist=False,
        Parameters=None,
        Restart=True,
        Checkpoint=False,
        ExpertMode=False,
        Coordinates_box_0=Coordinates_box_0,
        Structure_box_0=Structure_box_0,
        binCoordinates_box_0=binCoordinates_box_0,
        extendedSystem_box_0=extendedSystem_box_0,
        Coordinates_box_1=Coordinates_box_1,
        Structure_box_1=Structure_box_1,
        binCoordinates_box_1=binCoordinates_box_1,
        extendedSystem_box_1=extendedSystem_box_1,
        binVelocities_box_0=None,
        binVelocities_box_1=None,
        input_variables_dict={
            "ChemPot":{"OPC":chemical_potential},
            "PRNG": seed_no,
            "Potential": "VDW",
            "LRC": LRC,
            "Rcut": Rcut_ang,
            "RcutLow": Rcut_low_ang,
            "RcutCoulomb_box_0":RcutCoulomb_box_0,
	        "ElectrostaticMethod":Electrostatic_Method,
	        "PMESplineOrder": PMESplineOrder,
            "PMEGridSpacing": PMEGridSpacing,
            "PMERefreshFreq": PMERefreshFreq,
            "ElectroStatic": Electrostatic_bool,
            "Tolerance": Ewald_tol,
            "VDWGeometricSigma": False,
            "Exclude": Exclude,
            "DisFreq": DisFreq,
            "VolFreq": VolFreq,
            "RotFreq": RotFreq,
            "MultiParticleFreq": MultiParticleFreq,
            "RegrowthFreq": RegrowthFreq,
            "IntraSwapFreq": IntraSwapFreq,
            "IntraMEMC-2Freq": IntraMEMC_2Freq,
            "CrankShaftFreq": CrankShaftFreq,
            "SwapFreq": SwapFreq,
            "MEMC-2Freq": MEMC_2Freq,
           # "MEMC-2-LiqFreq": MEMC_2LiqFreq,
           # "ExchangeVolumeDim": Exchange_volume,
           # "MEMC_DataInput": memc_all_moves,
            "OutputName": output_file_prefix,
            "EqSteps": EqSteps,
            "AdjSteps":AdjSteps,
            "PressureCalc": [False, pressure_calc_freq],
            "RestartFreq": [True, coordinate_output_freq],
            "CheckpointFreq": [True, coordinate_output_freq],
            "DCDFreq": [True, coordinate_output_freq],
            "ConsoleFreq": [True, console_output_freq],
            "BlockAverageFreq":[True, block_ave_output_freq],
            "CoordinatesFreq": output_false_list_input,
            "HistogramFreq": [True,histogram_output],
            "SampleFreq": sample_freq,
            "CBMC_First": 12,
            "CBMC_Nth": 10,
            "CBMC_Ang": 50,
            "CBMC_Dih": 50,
            "RunNumber":run_number,
            "RunLetter":'a',


        },
    )
    print("#**********************")
    print("Completed: equilb GEMC-NPT GOMC control file written")
    print("#**********************")

    # ******************************************************
    # equilb selected_ensemble, if NVT -> NPT - GOMC control file writing  (end)
    # Note: the control files are written for the max number of gomc_equilb_design_ensemble runs
    # so the Charmm object only needs created 1 time.
    # ******************************************************

    # ******************************************************
    # production NPT or GEMC-NVT - GOMC control file writing  (start)
    # ******************************************************

    print("#**********************")
    print("Started: production GEMC-NPT GOMC control file writing")
    print("#**********************")

    output_file_prefix = gomc_production_output_name_str
    restart_control_file_name_str = gomc_equilb_output_name_str

    # calc MC steps
    MC_steps = int(gomc_steps_production)

    Coordinates_box_0 = "{}_BOX_0_restart.pdb".format(
        restart_control_file_name_str
    )
    Structure_box_0 = "{}_BOX_0_restart.psf".format(
        restart_control_file_name_str
    )
    binCoordinates_box_0 = "{}_BOX_0_restart.coor".format(
        restart_control_file_name_str
    )
    extendedSystem_box_0 = "{}_BOX_0_restart.xsc".format(
        restart_control_file_name_str
    )
    Coordinates_box_1 = "{}_BOX_1_restart.pdb".format(
        restart_control_file_name_str
    )
    Structure_box_1 = "{}_BOX_1_restart.psf".format(
        restart_control_file_name_str
    )
    binCoordinates_box_1 = "{}_BOX_1_restart.coor".format(
        restart_control_file_name_str
    )
    extendedSystem_box_1 = "{}_BOX_1_restart.xsc".format(
        restart_control_file_name_str
    )

    gomc_control.write_gomc_control_file(
        gomc_charmm_object_with_files,
        gomc_production_control_file_name_str,
        "GCMC",
        MC_steps,
        production_temperature_K,
        check_input_files_exist=False,
        Parameters=None,
        Restart=True,
        Checkpoint=False,
        ExpertMode=False,
        Coordinates_box_0=Coordinates_box_0,
        Structure_box_0=Structure_box_0,
        binCoordinates_box_0=binCoordinates_box_0,
        extendedSystem_box_0=extendedSystem_box_0,
        Coordinates_box_1=Coordinates_box_1,
        Structure_box_1=Structure_box_1,
        binCoordinates_box_1=binCoordinates_box_1,
        extendedSystem_box_1=extendedSystem_box_1,
        binVelocities_box_1=None,
        input_variables_dict={
            "ChemPot":{"OPC":chemical_potential},
            "PRNG": seed_no,
            "Potential": "VDW",
            "LRC": LRC,
            "Rcut": Rcut_ang,
            "RcutLow": Rcut_low_ang,
            "RcutCoulomb_box_0":RcutCoulomb_box_0,
	        "ElectrostaticMethod":Electrostatic_Method,
	        "PMESplineOrder": PMESplineOrder,
            "PMEGridSpacing": PMEGridSpacing,
            "PMERefreshFreq": PMERefreshFreq,
            "ElectroStatic": Electrostatic_bool,
            "Tolerance": Ewald_tol,
            "VDWGeometricSigma": False,
            "Exclude": Exclude,
            "DisFreq": DisFreq,
            "VolFreq": VolFreq,
            "RotFreq": RotFreq,
            "MultiParticleFreq": MultiParticleFreq,
            "RegrowthFreq": RegrowthFreq,
            "IntraSwapFreq": IntraSwapFreq,
            "IntraMEMC-2Freq": IntraMEMC_2Freq,
            "CrankShaftFreq": CrankShaftFreq,
            "SwapFreq": SwapFreq,
            "MEMC-2Freq": MEMC_2Freq,
          #  "MEMC-2-LiqFreq": MEMC_2LiqFreq,
          #  "ExchangeVolumeDim": Exchange_volume,
          #  "MEMC_DataInput": memc_all_moves,
            "OutputName": output_file_prefix,
            "EqSteps": EqSteps,
            "AdjSteps":AdjSteps,
            "PressureCalc": [False, pressure_calc_freq],
            "RestartFreq": [True, coordinate_output_freq],
            "CheckpointFreq": [True, coordinate_output_freq],
            "DCDFreq": [True, coordinate_output_freq],
            "ConsoleFreq": [True, console_output_freq],
            "BlockAverageFreq":[True, block_ave_output_freq],
            "CoordinatesFreq": output_false_list_input,
            "HistogramFreq": [True,histogram_output],
            "SampleFreq": sample_freq,
            "CBMC_First": 12,
            "CBMC_Nth": 10,
            "CBMC_Ang": 50,
            "CBMC_Dih": 50,
            "RunNumber": run_number,
            "RunLetter":'a',
        },
    )

    print("#**********************")
    print("Completed: production NPT or GEMC-NVT GOMC control file writing")
    print("#**********************")
    # ******************************************************
    # production NPT or GEMC-NVT - GOMC control file writing  (end)
    # ******************************************************

# ******************************************************
# ******************************************************
# Creating GOMC files (pdb, psf, force field (FF), and gomc control files (end)
# ******************************************************
# ******************************************************

## NVT pre-equilibration
@Project.pre(mosdef_input_written)
@Project.pre(part_2a_gomc_nvt_equilb_design_ensemble_control_file_written)
@Project.post(part_4a_job_gomc_nvt_equilb_design_ensemble_completed_properly)
@Project.operation(directives=
    {
        "np": lambda job: job.doc.gomc_ncpu,
        "ngpu": lambda job: job.doc.gomc_ngpu,
        "memory": memory_needed,
        "walltime": walltime_gomc_equilbrium_hr,
    }, with_job=True, cmd=True
)
def run_nvt_equilb_ensemble_gomc_command(job):
    """Run the gomc equilb_ensemble simulation."""
    control_file_name_str = gomc_nvt_equilb_control_file_name_str

    print(f"Running simulation job id {job}")
    run_command = "{}/{} +p{} {}.conf > out_{}.dat".format(
        str(gomc_binary_path),
        str(job.doc.gomc_nvt_equil_gomc_binary_file),
        str(job.doc.gomc_ncpu),
        str(control_file_name_str),
        str(control_file_name_str),
    )

    print('gomc equilb run_command = ' + str(run_command))

    return run_command

# ******************************************************
# ******************************************************
# equilb NPT or GEMC-NVT - starting the GOMC simulation (start)
# ******************************************************
# ******************************************************

@Project.pre(mosdef_input_written)
@Project.pre(part_2b_gomc_equilb_design_ensemble_control_file_written)
@Project.pre(part_4a_job_gomc_nvt_equilb_design_ensemble_completed_properly)
@Project.post(part_3b_output_gomc_equilb_design_ensemble_started)
@Project.post(part_4b_job_gomc_equilb_design_ensemble_completed_properly)
@Project.operation(directives=
    {
        "np": lambda job: job.doc.gomc_ncpu,
        "ngpu": lambda job: job.doc.gomc_ngpu,
        "memory": memory_needed,
        "walltime": walltime_gomc_equilbrium_hr,
    }, with_job=True, cmd=True
)
#@flow.with_job
#@flow.cmd
def run_equilb_ensemble_gomc_command(job):
    """Run the gomc equilb_ensemble simulation."""
    control_file_name_str = gomc_equilb_control_file_name_str

    print(f"Running simulation job id {job}")
    run_command = "{}/{} +p{} {}.conf > out_{}.dat".format(
        str(gomc_binary_path),
        str(job.doc.gomc_equilb_design_ensemble_gomc_binary_file),
        str(job.doc.gomc_ncpu),
        str(control_file_name_str),
        str(control_file_name_str),
    )

    print('gomc equilb run_command = ' + str(run_command))

    return run_command


# ******************************************************
# ******************************************************
# equilb NPT or GEMC-NVT - starting the GOMC simulation (end)
# ******************************************************
# ******************************************************


# ******************************************************
# ******************************************************
# production run - starting the GOMC simulation (start)
# ******************************************************
# ******************************************************


@Project.pre(part_2c_gomc_production_control_file_written)
@Project.pre(part_4b_job_gomc_equilb_design_ensemble_completed_properly)
@Project.post(part_3c_output_gomc_production_run_started)
@Project.post(part_4c_job_production_run_completed_properly)
@Project.operation(directives=
    {
        "np": lambda job: job.doc.gomc_ncpu,
        "ngpu": lambda job: job.doc.gomc_ngpu,
        "memory": memory_needed,
        "walltime": walltime_gomc_production_hr,
    }, with_job=True, cmd=True
)
def run_production_run_gomc_command(job):
    """Run the gomc_production_ensemble simulation."""

    control_file_name_str = gomc_production_control_file_name_str

    print(f"Running simulation job id {job}")
    run_command = "{}/{} +p{} {}.conf > out_{}.dat".format(
        str(gomc_binary_path),
        str(job.doc.gomc_production_ensemble_gomc_binary_file),
        str(job.doc.gomc_ncpu),
        str(control_file_name_str),
        str(control_file_name_str),
    )

    print('gomc production run_command = ' + str(run_command))

    return run_command
# ******************************************************
# ******************************************************
# production run - starting the GOMC simulation (end)
# ******************************************************
# ******************************************************


# ******************************************************
# ******************************************************
# data analysis - get the average data from each replicate (start)
# ******************************************************
# ******************************************************

@Project.pre(part_4c_job_production_run_completed_properly)
@Project.post(part_5a_hist_files_transferred)
@Project.operation(directives=
     {
         "np": 1,
         "ngpu": 0,
         "memory": memory_needed,
         "walltime": walltime_gomc_analysis_hr,
     }, with_job=True
)
def part_5a_analysis_individual_simulation_averages(job):
    # we are going to copy all of the histogram data to another directory for processing.
    source_dir = "."

# create directory, if it exists, leave it there and continue
    histogram_dir=f"../../data{job.doc.replica_number}"
    os.makedirs(histogram_dir,exist_ok=True)

    pattern = re.compile(r"^(his|n1dis)\d+a\.dat$")
    # loop over filenames to fine the ones we are looking for
    for filename in os.listdir(source_dir):
        if pattern.match(filename):
                dest_path = os.path.join(histogram_dir, filename)

                #copy file from current folder to destination
                if os.path.exists(dest_path):
                    print(f"Skipped (Already Exists): {filename}")
                else:
                    shutil.copy(filename, dest_path)
                    print(f"Copied: {filename}")


    # ***********************
    # end copying files
    # ***********************

# ******************************************************
# ******************************************************
# data analysis - get the average data from each replicate (end)
# ******************************************************
# ******************************************************


# ******************************************************
# ******************************************************
# data analysis - get the average and std. dev. from/across all the replicate (start)
# ******************************************************
# ******************************************************





# ******************************************************
# ******************************************************
# signac end code (start)
# ******************************************************
# ******************************************************
if __name__ == "__main__":
    pr = Project()
    pr.main()
# ******************************************************
# ******************************************************
# signac end code (end)
# ******************************************************
# ******************************************************
