#include <iostream>
using namespace std;

class Diagonal
{
private:
    int *A, n;

public:
    Diagonal(int n);

    void Create();

    int Get(int i, int j);

    void Set(int i, int j, int x);

    void Display();

    ~Diagonal();
};

Diagonal :: Diagonal(int n)
{
    this->n = n;
    A = new int[n];
}

Diagonal :: ~Diagonal()
{
    delete []A;
}

void Diagonal :: Create()
{
    int x;

    for(int i = 1; i <= n; i++)
    {
        for(int j = 1; j<= n; j++)
        {
            cin >> x;
            if(i == j)
            {
                A[i-1] = x;
            }

            else cout << "0";
        }
        cout << endl;

    }
}

int main() {
    return 0;
}
