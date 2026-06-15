"""Initialize signac statepoints."""

import os
import numpy as np
import signac
import unyt as u
from typing import NamedTuple

# *******************************************
# the main user varying state points (start)
# *******************************************

project=signac.get_project()

print("os.getcwd() = " +str(os.getcwd()))

pr_root = os.getcwd()
pr = signac.get_project(pr_root)


#production_temperatures = [300, 350, 400, 450, 500, 550, 575, 600, 625, 650, 675] * u.K
temperatures =        [685,   660,   630,  590,  660,  630,  600,  570,  540,  510,   480,   450] * u.K
chemical_potentials = [-4800,-4800,-4800,-4800,-4710,-4680,-4650,-4640,-4635,-4630, -4628, -4628]*u.K
run_numbers =         [1,        2,    3,    4,    5,    6,    7,    8,    9,   10,    11,    12]
initial_molecules =   [   50,   25,   25,   10,  300,  340,  375,  375,  418,  425,   425,   425]

replicas = [0]

total_statepoints=[]
#zip iinks independent pairs so they move together.
#i.e. the first entry in each list is the set of conditions for the first simulation
# the second entry in each list is the set of conditions for the second simulation.
#set strict=True to catch situations where there is a typo in one of the lists
#this will throw a value error.
for temp_i, chem_i, molec_i, run_i in zip(temperatures, 
        chemical_potentials,
        initial_molecules,
        run_numbers,
        strict=True):

    for replica_i in replicas:
        statepoint = {
                    "temperature": temp_i,
                    "chemical_potential": chem_i,
                    "initial_molecules": molec_i,
                    "run_number": run_i,
                    "replica_number":replica_i
                    }
        total_statepoints.append(statepoint)

# Verify the output length 
print(f"Total statepoints generated: {len(total_statepoints)}")


#build the statepoints in the workspace
for sp in total_statepoints:
    job=pr.open_job(
        statepoint=sp,
    ).init()

    print(
        f"Initialized Job [{job.id}] -> T: {sp['temperature']}, μ: {sp['chemical_potential']}, Run: {sp['run_number']}, Replicas: {sp['replica_number']}, N: {sp['initial_molecules']}")
        
