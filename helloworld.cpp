/* Put this text inside hello.c file */
#include <mpi.h>
#include <stdio.h>

int main(int argc, char** argv) {
    printf("helloworld %d\n", argc);
    return 0;
}
