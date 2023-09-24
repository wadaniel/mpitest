#include <stdio.h>
#include <mpi.h>

int main(int argc, char** argv) {
    MPI_Init(NULL, NULL);  
    printf("helloworld %d\n", argc);
    MPI_Finalize();
    return 0;
}
