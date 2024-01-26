#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int compar(char word1[30], char word2[30]){
    int aux;

    if(strlen(word1)!=strlen(word2)){
        return 0;
    }
    
    for(int i=0; i<strlen(word1); i++){
        if(word1[i]!=word2[i]){
            return 0;
        }
    }

    return 1;
}

int main() {
    char word1[30], word2[30];

    gets(word1);
    gets(word2);

    if(compar(word1, word2)){
        printf("As palavras sao iguais!! :)");
    }
    else{
        printf("As palavras sao diferentes!! :(");
    }
    return 0;
}
