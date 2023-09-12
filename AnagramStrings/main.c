#include <stdio.h>


//Anagram strings -> strings that are made of the same letters, they have the same length
//We use Hash Table in order to obtain O(n) complexity
int main() {
    char A[] = "decimal";
    char B[] = "medical";
    int i, H[26] = {0};

    for(i = 0; A[i] != '\0'; i++){
        H[A[i] - 97]+=1;
    }

    for(i = 0; B[i] != '\0'; i++){
        H[A[i] - 97]-=1;
        if(H[A[i] - 97] < 0) {
            printf("Not anagram");
            break;
        }
    }

    if(B[i] == '\0')
        printf("Anagram");

    return 0;
}
