//
// Created by RARES on 9/8/2022.
//

#include "diagonal.h"
using namespace std;

class Diagonal{
private:
    int n;
    int *A;

public:
    Diagonal(int n)//Constructor creates an array with the size of "this" n(our n)
    {
        this->n = n;
        A = new int[n];
    }

    void set(int i, int j, int x);

    int get(int i, int j);

    void Display();

    ~Diagonal();

};

void Diagonal :: set(int i, int j, int x)
{
    if(i == j)
        A[i-1] = x;
}

int Diagonal :: get(int i, int j)
{
    if (i == j)
        return A[i-1];
    else return 0;
}

void Diagonal ::Display()
{
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == j)
                cout << A[i-1];
            else cout << "0 ";

        }
    }
}