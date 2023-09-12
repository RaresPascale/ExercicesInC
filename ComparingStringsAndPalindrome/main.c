#include <stdio.h>
//Comapring strings
int main() {
    char A[] = "Painter";
    char B[] = "Painting";
    int i, j;
    for(i = 0, j = 0; A[i] != NULL, B[j] != NULL; i++, j++)
    {
        if(A[i] != B[j])
            break;
    }

    if(A[i] == B[j]) printf("equal \n");
    else if(A[i] < B[j]) printf("smaller \n");
    else printf("greater");

    return 0;
}
