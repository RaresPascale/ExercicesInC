#include <stdio.h>

//Made using recursion => Backtracking
void perm(char s[], int k){
    static int A[10] = {0};// static because we want it to be available for all function calls
    static char Res[10];
    int i;

    if(s[k] == '\0')
    {
        Res[k] = '\0';
        printf("%s ",Res);
    }
    else {
        for (i = 0; s[i] != 0; i++) {
            if (A[i] == 0) {
                Res[k] = s[i];
                A[i] = 1;
                perm(s, k + 1);
                A[i] = 0;
            }
        }
    }
}

void Perm(char s[], int l, int h){
    int i;
    int aux, aux2;

    if(l == h)
    {
        printf("%s", s);
    }

    else {
        for (i = l; i <= h; i++) {
            aux = s[l];
            s[l] = s[i];
            s[i] = aux;

            Perm(s, l + 1, h);

            aux2 = s[l];
            s[l] = s[i];
            s[i] = aux2;
        }
    }
}

int main() {
    char s[] = "ABC";
    perm(s,0);
    Perm(s, 0, 0);
     return 0;
}
