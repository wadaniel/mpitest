/* Put this text inside hello.c file */
#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    int rank;
    int world;

    MPI_Init(NULL, NULL);
    MPI_Comm_rank(MPI_COMM_WORLD, &rank);
    MPI_Comm_size(MPI_COMM_WORLD, &world);
    printf("Hello: rank %d, world: %d\n",rank, world);

    int spawn_error;
    MPI_Comm comm;

    MPI_Comm_spawn("./helloworld", MPI_ARGV_NULL, 1, MPI_INFO_NULL, 0, MPI_COMM_SELF, &comm, &spawn_error);
    printf("done %d %d\n", rank, spawn_error);
    MPI_Finalize();
}
