#include <stdio.h>

// Arrays and pointers are different types that are used in similar manner

void print(char* C)
{
    int i = 0;
    while(*C != '\0')
    {
        printf("%c", *C);
        C++;
    }
    printf("\n");
}

int main() {
//    char c1[6] = "Hello";
//    char *c2;
//
//    c2 = c1; //c2 will point to the first el in the array
//    printf("%c", c2[1]);
//
//    c2++;
//    //printf("%c", c2[i]);

    //Arrays are passed by reference

    char C[20] = "Hello";

    print(C);





    return 0;
}
