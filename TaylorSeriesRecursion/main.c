#include <stdio.h>

//Normal way
/*double e(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if(n == 0)
        return 1;
    r = e(x, n-1);
    p = p * x;
    f = f * n;
    return r + p/f;
}*/

//Using Horner's Rule, less multiplications, O(n) complexity

double e(int x, int n)
{
    static double s;
     if(n == 0)
         return s;
     s = 1 + x * s/n;
     return e(x, n-1);
}

//Taylor series iteratively
double e1(int x, int n)
{
    static double s = 1;// variabila statica, isi pastreaza valoarea dupa ce se apeleaza fucntia
    // daca se folosea o variabila normala se stergea la fiecare apelare a functiei
    int i;
    double num = 1;
    double den = 1;

    for(i = 1; i<=n; i++)
    {
       num*=x;
       den*=i;
       s+=num/den;
    }
    return s;
}

int main() {

    printf("%lf \n", e1(1,10));

    return 0;
}
