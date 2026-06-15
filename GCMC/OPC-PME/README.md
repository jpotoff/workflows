This workflow illustrates how to run GCMC histogram-reweighting simulations for the OPC water model 
using Particle Mesh Ewald.

This workflow (as of 6/15/2026) requires the use of the "PME" branch of GOMC and MoSDeF-GOMC found in:

https://github.com/jpotoff/GOMC

https://github.com/jpotoff/MoSDeF-GOMC

This workflow illustrates how to use a "yaml" file to specify some GOMC runtime parameters.
In the future, and updated version of this workflow will likely move all runtime parameters, 
including input and output file names to config.yaml.  This will separate user specified parameters
from the core workflow, eliminating the need for users to edit the workflow directly.  

Updated programs for performing histogram reweighting are provided here: https://github.com/jpotoff/Histogram_Analysis
