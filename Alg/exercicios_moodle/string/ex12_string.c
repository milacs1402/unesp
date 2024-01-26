#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int count(char frase[50], char palavra[30]){
    char aux[30];
    int num, pos;

    for(int i=0; i<strlen(frase); i++){
        if(frase[i]==' '){
            if(strcmp(aux, palavra)){
                num++;
                pos=i;
            }
        }
        else{
            frase[i]=aux[i];
        }
    }
    
}

int main() {
    char frase[50], palavra[10];

    gets(frase);
    gets(palavra);

    
    return 0;
}
