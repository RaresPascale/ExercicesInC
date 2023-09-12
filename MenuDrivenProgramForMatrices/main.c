#include <stdio.h>
#include<stdlib.h>

//This program is only available for Diagonal Matrix
//Formulas for other types of matrices:
//Lower Triangular: Row-Major: A[i*(i+1)/2+j-1]
//                  Column-Major: A[(j-1)*n-(j-2)+(j-1)/2+i-j]
//
//Upper Triangular: Row-Major: A[(i-1)*n-(i-2)*(i-1)/2+j-i]
//                  Column-Major: A[(j*j-1)/2+i-1]
//
//Symmetric Matrix: M[i][j] = M[j][i]
void main() {
    int *A, n, ch, x, i, j;

    printf("Enter dimension");
    scanf("%d",&n);

    A = (int *)malloc(n * sizeof(int));//For LT array size will change to n*(n+1)/2
    //A = new int[n]; C++ code

    do{
        //Display menu;

        printf("\n Menu \n");
        printf("1.  Create\n");
        printf("2.  Get\n");
        printf("3.  Set\n");
        printf("4.  Display\n");
        printf("5.  Exit\n");

        printf("Enter your choice ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                for(i = 1; i <= n; i++)
                {
                    scanf("%d",&A[i-1]);
                }
                break;

            case 2:
                printf("Enter indices");
                scanf("%d %d", &i, &j);

                if(i == j)// i>= j for Lt, the conditions for the other types of Matrices as well as the formulas are on the notes
                {
                    printf("%d", A[i-1]);
                }
                else printf("0");

            case 3:
                printf("Enter row, col, el");
                scanf("%d %d %d", &i, &j, &x);

                if(i == j) A[i-1] = x;

            case 4:
                for(i = 1; i <= n; i++)
                {
                    for(j = 1; j <= n; j++)
                    {
                        if( i == j) printf("%d", A[i-1]);
                        else printf("0");
                    }
                }
        }
    }
    while(ch < 6);
}
