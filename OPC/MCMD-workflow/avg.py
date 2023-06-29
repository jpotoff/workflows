#avg 2

import numpy as np

file_path='GOMC_Energies_Stat_box_0.txt'

with open(file_path,'r') as file:
    lines=file.readlines()

    #split first row into columns
    columns= lines[0].split()
    dataset_labels=lines[0].split()
    
#load data into numpy array
data=np.loadtxt(file_path,skiprows=1)

#extract columns
float_columns = data[:, np.where(np.isnan(data).sum(axis=0)==0)[0]]

column_averages=np.mean(float_columns,axis=0)

column_std_devs=np.std(float_columns,axis=0)

# Calculate the number of observations in each column
num_observations = float_columns.shape[0]

# Calculate the column standard errors
column_std_errors = column_std_devs / np.sqrt(num_observations)


for i, average in enumerate(column_averages, 1):
    std_dev = column_std_devs[i-1]
    std_error = column_std_errors[i-1]
    dataset_label=dataset_labels[i-1]
    print(f"Average of {dataset_label}: {average} {std_dev} {std_error}")
