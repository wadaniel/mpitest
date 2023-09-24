#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    MPI_Init(NULL, NULL);  
    printf("helloworld %d\n", argc);
    MPI_Comm comm_parent;
    MPI_Comm_get_parent(&comm_parent);
    MPI_Comm_disconnect(&comm_parent);
    MPI_Finalize();
    return 0;
}
