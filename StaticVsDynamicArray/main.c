#include <stdio.h>
#include <stdlib.h>

int main() {

    int A[5] = {2,4,6,8};// ARRAY IS CREATED IN STACK
    int *p;// POINTER IS CREATED IN STACK, AND POINTS TO THE ADRESS OF THE FIRST ELEMENT FROM THE ARRAY IN HEAP

    p = (int *)malloc(5 * sizeof(int));// FOR ALLOCATING MEMORY IN HEAP

    p[0] = 3;
    p[1] = 5;
    p[2] = 7;
    p[3] = 9;
    p[4] = 11;

    for (int i = 0; i < 5 ; ++i) {
        printf("%d ", A[i]);

    }

    printf("\n");
    for (int i = 0; i < 5; ++i) {
        printf("%d ", p[i]);
    }

    return 0;
}

// C++ CODE
//int *p = new int[5]; alocating memory in heap
//now for increseanig the size of array
// we cannot do it directly
//we create another array
// int *q = new int[10];
//we copy the elements from p in q with a for .. q[i] = p[i];
//we delete p => delete []p; // we have to release unused memory
//p = q;
//q = NULL; // release unused memory
