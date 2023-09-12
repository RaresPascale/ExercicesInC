#include <stdio.h>
#include <stdlib.h>

//Finding Missing elements using Hashing O(n) time
struct Array{
    int A[50];
    int size;
    int length;
};

int main() {
    struct Array arr = {{3,7,4,9,12,6,1,11,2,10},20,10};
    struct Array H = {{0,0,0,0,0,0,0,0,0,0,0,0,0},20,13};

    for (int i = 0; i < arr.length; i++) {
        H.A[arr.A[i]]++; //increment in H the element we find in arr
    }

    for(int i = 1; i <= 12; i++){
        if(H.A[i] == 0)
            printf("%d ", i);
    }

    printf("\n");
    struct Array arr1 = {{3,6,8,8,10,12,15,15,15,20},20,10};

    int lastDuplicate = 0;

    for (int i = 0; i < arr1.length; i++) {
        if(arr1.A[i] == arr1.A[i+1] && arr1.A[i] != lastDuplicate) {
            printf("\n%d", arr1.A[i]);
            lastDuplicate = arr1.A[i];
        }
    }

    printf("\n");
    //Now for finding the number of duplicates O(n) complexity
    int j = 0;
    for (int i = 0; i < arr1.length - 1; i++) {
        if(arr1.A[i] == arr1.A[i+1]) {
            j = i + 1; // j o sa fie in dreapta lui i
            while (arr1.A[j] == arr1.A[i])j++;
                                                // daca elementul din stanga (i) este egal cu cel din dreapta (j)
                                                // incrementeaza pe j pana ajunge la un element din dreaota lui (i) diferit de acesta
            printf("\n%d is apprearing %d times\n", arr1.A[i],
                   j - i);                      // printam elementul duplicat si de cate ori apare j- i
                                                // j - i deoarece j se va afla la dreapta lui i pe primul numar diferit de acsta
                                                // daca scadem j - i aflam cate numere duplicate se afla la stanga lui
            i = j - 1;
        }
    }


    //Finding Duplicates Using Hash Table
    printf("\n");
    struct Array Hash = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0},30, 21};

    for (int i = 0; i < arr1.length; i++) {
        Hash.A[arr1.A[i]]++;
    }

    for (int i = 0; i < 20; i++) {
        if(Hash.A[i] > 1)
            printf("%d %d ",i , Hash.A[i]);
    }

    //Find a pair with sum k(a + b = k)  k = 10;
    printf("\n");
    struct Array arr2 = {{6,3,8,10,16,7,5,2,9,14},20,10};

    int k = 10;
    //Two for loops, we have O(n^2) complexity (quadratic time)
    for (int i = 0; i < arr2.length - 1; i++) {
        for (int j = i+1; j < arr2.length; j++) {
            if(arr2.A[i] + arr2.A[j] == k)
                printf("%d + %d = %d\n",arr2.A[i], arr2.A[j], k);
        }
    }

    //We will use a hash table for a faster method O(n). Hash table must have the last index = to the biggest number in the array that we are working with
    printf("\n");
    struct Array Hash2 = {{0,0,0, 0,0,0,0,0,0,0,0,0,0,0,0,0,0}};

    for (int i = 0; i < arr2.length; i++) {
        if(Hash2.A[k - arr2.A[i]] != 0 && arr2.A[i] < 10) //H de 10 - un nr din a de I da diferit de 0 inseamna ca am gasit perechea
        {
            printf("%d + %d = %d\n", arr2.A[i], k - arr2.A[i], k);
        }
        Hash2.A[arr2.A[i]]++;
    }


    //Finding min and max in a single scan
    printf("\n");
    struct Array arr3 = {{5,8,3,9,6,2,10,7,-1,4},20,10};

    int min = arr3.A[0];
    int max = arr3.A[0];

    for(int i = 1; i < arr3.length-1; i++){
        if(arr3.A[i] < min)
            min = arr3.A[i];
        else if (arr3.A[i] > max)
            max = arr3.A[i];
    }
     printf("%d %d \n", min, max);


    return 0;
}


