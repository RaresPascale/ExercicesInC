#include <stdio.h>
#include<stdlib.h>

struct Matrix{
    int *A;
    int n;

};

//Lower Triangular Matrix = elemente pe diagonala principala si sub ea

void SetLowerTriangular(struct Matrix *m, int i, int j, int x) //Using row major formula
{
    if(i >= j)
       m->A[i*(i-1)/2+j-1] = x;
}

int GetLowerTriangularEl(struct Matrix m, int i, int j) // Using row major formula
{
    if(i >= j)
        return m.A[i*(i-1)/2 + j-1];
    else return 0;
}

void DisplayLowerTriangular(struct Matrix m){ //Using row major formula
    int i, j;
    for(i = 1; i <= m.n; i++){
        for(j = 1; j <= m.n; j++){
            if(i >= j)
                printf("%d ", m.A[i*(i-1)/2+j-1]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

//Code for Column Major representation of a Lower Triangular matrix

void Set(struct Matrix *m,int i,int j,int x)
{
    if(i>=j)
        m->A[m->n*(j-1)+(j-2)*(j-1)/2+i-j]=x;
}
int Get(struct Matrix m,int i,int j)
{
    if(i>=j)
        return m.A[m.n*(j-1)+(j-2)*(j-1)/2+i-j];
    else
        return 0;
}
void Display(struct Matrix m)
{
    int i,j;
    for(i=1;i<=m.n;i++)
    {
        for(j=1;j<=m.n;j++)
        {
            if(i>=j)
                printf("%d ",m.A[m.n*(j-1)+
                                 (j-2)*(j-1)/2+i-j]);
            else
                printf("0 ");
        }
        printf("\n");
    }
}

//Code for Diagonal Matrix(elemnte doar pe diagonala principala
//void Set(struct Matrix *m, int i, int j, int x){
//    if(i == j)
//        m->A[i-1] = x;
//}

//int Get(struct Matrix m, int i, int j){
//    if(i == j)
//        return m.A[i-1];
//    else
//        return 0;
//}

//void Display(struct Matrix m){
//    int i, j;
//    for(i = 0; i < m.n; i++){
//        for(j = 0; j < m.n; j++){
//            if(i == j)
//                printf("%d ", m.A[i]);
//            else
//                printf("0 ");
//        }
//    printf("\n");
//    }
//}

int main() {
//    struct Matrix m;
//    m.n = 4;
//
//    Set(&m,1,1,5);Set(&m,2,2,8);Set(&m,3,3,9);Set(&m,4,4,12);
//
//    printf("%d ", Get(m,2,2));
//    printf("\n");
//    Display(m);

    struct Matrix m;
    int i, j, x;

    printf("Enter Dimension");
    scanf("%d", &m.n);

    m.A = (int *)malloc(m.n*(m.n+1)/2*sizeof(int)); //m.n - 1 daca folosim row major formula

    printf("Enter all elements");

    for(i = 1; i<= m.n; i++)
    {
        for(j = 1; j <= m.n; j++)
        {
            scanf("%d", &x);
            SetLowerTriangular(&m,i,j,x);
        }
    }
    printf("\n\n");
    DisplayLowerTriangular(m);
     return 0;
}
