#include <iostream>
using namespace std;

class LowerTri{
private:
    int n;
    int *A;

public:

    LowerTri()
    {
        n = 2;
        A = new int[2*(2+1)/2];
    }

    LowerTri(int n)//Constructor creates an array with the size of "this" n(our n)
    {
        this->n = n;
        A = new int[n*(n+1)/2];
    }

    void set(int i, int j, int x);

    int get(int i, int j);

    void Display();

    ~LowerTri()
    {
        delete[]A;
    }

    int GetDimension(){return n;}
};

void LowerTri :: set(int i, int j, int x)
{
    if(i >= j)
        A[i*(i-1)/2+j-1] = x;
}

int LowerTri :: get(int i, int j)
{
    if (i >= j)
        return A[i*(i-1)/2+j-1];
    else return 0;
}

void LowerTri ::Display()
{
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            if(i >= j)
                cout << A[i*(i-1)/2+j-1] << " ";
            else cout << "0 ";
        }
        cout << endl;
    }
}

int main() {
    int d;
    cout << "Enter dimension "<<endl;
    cin >> d;
    LowerTri lm(d);

    int x;
    cout<< "Enter all elements "<<endl;

    for(int i =1; i<= d; i++){
        for(int j = 1; j <= d; j++){

            cin >> x;
            lm.set(i,j,x);
        }
    }

    lm.Display();

    return 0;
}



