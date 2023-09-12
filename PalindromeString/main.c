#include <stdio.h>
//reverse and compare
int main() {

    char A[] = "madam";
    char B[6];

    int i,j;

    for(i = 0; A[i] != NULL; i++)
    {}
    i = i - 1;

    for(j = 0; i >= 0; j++,i--)
    {
        B[j] = A[i];
    }
    B[j] = '\0';

    for(i = 0, j = 0; A[i] != NULL, B[j] != NULL; i++, j++)
    {
        if(A[i] != B[j])
            printf("not a palindrome");
            break;
    }

    if(A[i] == B[j]) printf("palindrome \n");
    return 0;
}
