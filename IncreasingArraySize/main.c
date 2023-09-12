#include <stdio.h>
#include <stdlib.h>

int main() {

    int *p, *q;


    p = (int *)malloc(5 * sizeof(int));
    p[0] = 3; p[1] = 5; p[2] = 7; p[3] = 9; p[4] = 11;

    q = (int *)malloc(10 * sizeof(int));

    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
    }

    free(p);
    p = q;// p primeste si adresa lui q
    q = NULL;// q este sters

    for (int i = 0; i < 5; i++) {
        printf("%d ", p[i]);
    }

    return 0;
}

//int *A[3]; // array of pointers //each pointer will point to an array in heap
//double pointer int **A, and an area of pointers is created just as above, but in heap
