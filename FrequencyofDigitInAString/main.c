#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    //Code for counting the frequency of a digit in a string of digits and alphabets
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
        char *s;
    s = malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s = realloc(s, strlen(s) + 1);

    int i, j = 0;
    int H[10] = {0};

    for(i = 0; s[i] != '\0'; i++){
        if(s[i] >= 48 && s[i] <= 57){
            H[s[i] - 48]++;
        }
    }

    for(i = 0; i < 10; i++){
        printf("%d ", H[i]);
    }
    return 0;
}
