#!/bin/bash
#SBATCH --mail-type=END,FAIL
#SBATCH --mail-user=jpotoff@wayne.edu
#SBATCH --time=300:00:00
#SBATCH -N 1
#SBATCH -n 4
echo Running on host `hostname`
echo time is `date`
cd /home6/ai8111/GOMC/OPC/MCMD/250K
echo Directory is `pwd`
conda activate mosdef4

python run_NAMD_GOMC.py -f user_input_NAMD_GOMC.json > out_250K.dat

