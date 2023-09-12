#include <stdio.h>

int main() {
    char A[] = "finding";
    int H[26], i;

    for(i = 0; A[i] != NULL; i++){
        H[A[i]-97]++;
    }

    for(i = 0; i < 26; i++){
        if(H[i] > 1)
        {
            printf("%c\n", i + 97);
            printf("%d ", H[i]);
        }
    }
    return 0;
}
