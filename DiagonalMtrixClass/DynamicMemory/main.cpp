#include <iostream>
#include<stdio.h>
#include <stdlib.h>

// we can only acces heap by pointers
int main() {

//    int a; // goes on stack
//
//    int *p;
//
//    p = (int *)malloc(sizeof(int));
//
//    *p = 10;
//
//    p = (int *)malloc(sizeof(int));
//
//    *p = 20;
//
//    free(p);
//
//    p = (int *)malloc(20*sizeof(int)); // creation of an array in the heap memory
//
//    //calloc has two arguments
//
//    int *v = (int *)calloc(3,sizeof(int)); // allocates 3 elements of type int, and initialises the data with 0

    //realloc(pointerToStartingAddress,size)


    int n;
    printf("Enter size of array \n");
    scanf("%d" ,&n);

    int *A = (int *)malloc(n*sizeof(int));
    for (int i = 0; i <n ; i++) {
        A[i] = i+1;
    }

    int *B = (int *) realloc(A, 2*n*sizeof(int));

    printf("Prev block address = %d, new address = %d\n",A,B);

    for(int i = 0; i<2*n; i++){
        printf("%d ",B[i]);
    }







}
