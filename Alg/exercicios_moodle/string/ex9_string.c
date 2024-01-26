#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <math.h>

int main() {
    char frase[30], n;

    gets(frase);
    n=getchar();

    for(int i=0; i<strlen(frase); i++){
        if(toupper(frase[i])=='A' || toupper(frase[i])=='E' || toupper(frase[i])=='I' || toupper(frase[i])=='O' || toupper(frase[i])=='U'){
            printf("%c", n);
        }
        else{
            printf("%c", frase[i]);
        }
    }
    return 0;
}
