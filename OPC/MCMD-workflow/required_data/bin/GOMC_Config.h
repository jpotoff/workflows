// Configuration file generated by CMake from GOMC_Config.h.in

#define GOMC_VERSION_MAJOR 2
#define GOMC_VERSION_MINOR 75


/* Allow exposure of methods only used in unit testing */
#define GOMC_GTEST 0

/* Allow exposure of methods only used in unit testing - MPI Enabled */
#define GOMC_GTEST_MPI 0

/* Use MPI (with mpicc) for parallelization */
#define GOMC_LIB_MPI 0

/* Use threads_mpi for parallelization */
#define GOMC_THREAD_MPI 1

/* Make a parallel version of GOMC using message passing
   (MPI or thread_mpi) */
#define GOMC_MPI (GOMC_LIB_MPI || GOMC_THREAD_MPI)

/* MPI_IN_PLACE exists for collective operations */
#define MPI_IN_PLACE_EXISTS 0