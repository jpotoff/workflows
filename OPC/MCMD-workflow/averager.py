#averager for MCMC

file_path='GOMC_Energies_Stat_box_0.txt'

#create list to store averages
averages=[]
column_averages=[]
dataset_labels=[]
#open file
with open(file_path,'r') as file:
    lines=file.readlines()

    #split first row into columns
    columns= lines[0].split()
    dataset_labels=lines[0].split()

    #get number of columns
    num_columns=len(columns)

    #create a list to store the dataset sums, first element is a zero
    column_sums=[0]*(num_columns)
    column_float_counts=[0]*(num_columns)


    for line in lines[1:]:
        #split line into columns
        data_points = line.split()
        
        #average only the floats:
        for i in range(num_columns):
            try:
                data_point=float(data_points[i])
                #add the data point to the corresponding column sum
                column_sums[i]+=data_point
                #increment the count of float values in the column
                column_float_counts[i]+=1

            except ValueError:
                continue

    #calculate averages
    for i in range(num_columns):
        if column_float_counts[i]>0:
            column_average=column_sums[i]/ column_float_counts[i]
            column_averages.append(column_average)

   

#print  start with the second data column, ignoring the MCS data
for i,average in enumerate(column_averages,start=1):
    dataset_label=dataset_labels[i-1]
    print(f"Average of dataset {dataset_label}: {average}")
