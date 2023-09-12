#include <stdio.h>

int valid();

int main() {

    char *s = "welcome";
    int i;
    for(i = 0; s[i]!= NULL; i++){}
    printf("Length is %d", i);

    //Changing from lower case to upper case
    printf("\n");
    char A[] = "WELCOME";
    for(int i = 0; A[i] != NULL; i++){
        A[i]+=32;
    }
    printf("%s", A);

    //upper to lower and vice-versa
    printf("\n");
    char B[] ="wElCome";
    for (int i = 0; B[i] != NULL; i++) {
        if(B[i] >= 65 && B[i] <= 90 )
            B[i]+=32;
        else if(B[i] >= 'a' && B[i] <= 122)
            B[i]-=32;
    }
    printf("%s",B);

    //Counting vowels and consonants
    printf("\n");
    char D[] ="How are   u" ;
    int vcount = 0, ccount = 0;
    for (int i = 0; D[i] !=NULL ; i++) {
        if(D[i] == 'a' || D[i] == 'e' || D[i] == 'i' || D[i] == 'o' || D[i] =='u' || D[i] == 'A' || D[i] == 'E' || D[i] == 'I' || D[i] == 'O' || D[i] == 'U')
            vcount ++;
        else if(D[i] >= 65 && D[i] <=90 || D[i] >= 97 && D[i] <=122)
            ccount++;
    }
    printf("Vowels %d Consonants %d", vcount, ccount);

    //Counting number of words
    printf("\n");
    int word = 1;
    for(int i = 0; D[i] != NULL; i++){
        if(D[i] == ' ' && D[i-1]!=' ')
            word++;
    }
    printf("%d", word);

    //Validating a string
    printf("\n");

    char *name = "Anil321";
    char *name1 = "$alam11?";

    if (valid(name))
    {
        printf("Valid string");
    }
    else
    {
        printf("Invalid string");
    }

    //Reversing a string Method 1
    printf("\n");
     char s1[] = "python";
     char s2[7];
     int index;
     int j;

     for(index = 0; s1[index] != NULL; index++)
     {}
     index = index - 1;

     for( j = 0; index >= 0; j++, index--)
     {
         s2[j] = s1[index];
     }

     s2[j] = '\0';
     printf("%s", s2);

     //Revrsing a string Method2
     printf("\n");
     int counter1, counter2,t;
     for(counter2 = 0; s1[counter2] != NULL; counter2 ++)
     {
     }
     counter2-=1;

     for(counter1 = 0; counter1 < counter2; counter1++, counter2--)
     {
         t = s1[counter1];
         s1[counter1] = s1[counter2];
         s1[counter2] = t;
     }
    printf("%s", s1);
    return 0;
}

int valid(char *name)
{
    for(int i = 0; name[i] != NULL; i++)
    {
        if( !(name[i] >= 65 && name[i] <= 90) && !(name[i] >= 97 && name[i] <= 122) && !(name[i] >=48 && name[i] <= 57))
            return 0;
    }
    return 1;
}