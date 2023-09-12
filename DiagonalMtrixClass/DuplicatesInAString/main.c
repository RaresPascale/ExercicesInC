#include <stdio.h>

int main() {
    char A[] = "finding";
    int i, j = 0 ;

    for(i = 0; A[i] != NULL; i++)
    {
        if(A[i] == A[i+1]){
            j = i + 1;
            while(A[j] == A[i]) j++;
            printf("\n%c is appearing %d times", A[i], j-i);
            i = j-1;
        }
    }
    return 0;
}
