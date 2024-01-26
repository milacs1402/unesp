#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main() {
    char string1[30], string2[30];

    gets(string1);
    gets(string2);

    string1==strrev(string1);
    string2==strrev(string2);

    for(int i=0; i<strlen(string1); i++){
        if(toupper(string1[i])=='A' || toupper(string1[i])=='E' || toupper(string1[i])=='I' || toupper(string1[i])=='O' || toupper(string1[i])=='U'){
            printf("*");
        }
        else{
            printf("%c", string1[i]);
        }
    }

    printf("\n");

    for(int i=0; i<strlen(string2); i++){
        if(toupper(string2[i])=='A' || toupper(string2[i])=='E' || toupper(string2[i])=='I' || toupper(string2[i])=='O' || toupper(string2[i])=='U'){
            printf("*");
        }
        else{
            printf("%c", string2[i]);
        }
    }
    return 0;
}
