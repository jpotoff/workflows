"""Initialize signac statepoints."""

import os
import numpy as np
import signac
import unyt as u

# *******************************************
# the main user varying state points (start)
# *******************************************

#project=signac.init_project()
project=signac.get_project()

# [240, 250, 260, 270, 280, 290, 300, 320, 340, 360, 380] * u.K
#start with 240 and 2 replicas to debug script
production_temperatures = [ 250, 260, 270, 280, 290, 300, 320, 340, 340, 360, 370] * u.K
#production_temperatures = [240, 250] *u.K
production_pressures = [1] * u.bar

# [0, 1, 2, 3, 4]
replicas = [0,1,2]

# *******************************************
# the main user varying state points (end)
# *******************************************


print("os.getcwd() = " +str(os.getcwd()))

pr_root = os.getcwd()
pr = signac.get_project(pr_root)

# filter the list of dictionaries
total_statepoints = list()

for prod_temp_i in production_temperatures:
    for prod_press_i in production_pressures:
        for replica_i in replicas:
            statepoint = {
                "production_temperature_K": np.round(prod_temp_i.to_value("K"), ).item(),
                "production_pressure_bar": np.round(prod_press_i.to_value("bar"),).item(),
                "replica_number_int": replica_i,
            }
            total_statepoints.append(statepoint)

for sp in total_statepoints:
    pr.open_job(
        statepoint=sp,
    ).init()
