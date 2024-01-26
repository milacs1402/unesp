#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 11

float soma(float matriz[MAX][MAX], int l){
    float soma=0;
    for(int i=0; i<MAX; i++){
        soma+=matriz[l][i];
    }

    return soma;   
}

float media(float matriz[MAX][MAX], int l){
    float aux=0, media=0;
    for(int i=0; i<MAX; i++){
        aux+=matriz[l][i];
    }
    media= aux/MAX;

    return media;
}

int main() {
    float matriz[MAX][MAX];
    int l;
    char op;

    /* printf("Digite os 144 elementos da sua matriz:\n"); */
    
    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    /* printf("\nAgora selecione uma linha da sua matriz (de 1 a 11): "); */
    scanf("%d", &l);
    
    /* printf("Selecione a operacao a ser realizada na linha %d (S-soma/M-media): ", l); */
    scanf(" %c", &op);

    if(op=='S'){
        printf("%.2f" ,soma(matriz, l));
    }

    if(op=='M'){
        printf("%.2f" ,media(matriz, l));
    }
    return 0;
}
