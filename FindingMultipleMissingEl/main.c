#include <stdio.h>
#include <stdlib.h>

struct Array{
    int A[20];
    int size;
    int length;
};

void Display(struct Array arr)
{
    printf("\nElements are\n");
    for (int i = 0; i < arr.length; i++) {
        printf("%d ", arr.A[i]);
    }
}

int main() {
    struct Array arr = {{6,7,8,9,11,12,15,16,17,18,19},20,11};

    int diff = arr.A[0] - 0;

    for (int i = 0; i < arr.length; i++) {
        if(arr.A[i] - i != diff)
            while(diff < arr.A[i] - i)
            {
                printf("%d \n", i + diff);
                diff++;
            }
    }
    Display(arr);

    return 0;
}
