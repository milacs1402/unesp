#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 12

float soma(float matriz[MAX][MAX], int c){
    float soma=0;
    for(int i=0; i<MAX; i++){
        soma+=matriz[i][c];
    }

    return soma;   
}

float media(float matriz[MAX][MAX], int c){
    float aux=0, media=0;
    for(int i=0; i<MAX; i++){
        aux+=matriz[i][c];
    }
    media= aux/MAX;

    return media;
}

int main() {
    float matriz[MAX][MAX];
    int c;
    char op;
    scanf("%d", &c);
    scanf(" %c", &op);
    
    for(int i=0; i<MAX; i++){
        for(int j=0; j<MAX; j++){
            scanf("%f", &matriz[i][j]);
        }
    }
    
    if(op=='S'){
        printf("%.1f\n" ,soma(matriz, c));
    }

    if(op=='M'){
        printf("%.1f\n" ,media(matriz, c));
    }
    return 0;
}
