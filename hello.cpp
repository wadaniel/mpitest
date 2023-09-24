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

    MPI_Info info;
    int tmp = MPI_Info_create( &info );

    MPI_Comm comm_world = MPI_COMM_WORLD;
    printf("info %d %d\n", rank, tmp);
    MPI_Comm_spawn("./helloworld", MPI_ARGV_NULL, 1, info, 0,  MPI_COMM_SELF, &comm_world, MPI_ERRCODES_IGNORE);
    MPI_Finalize();
}
