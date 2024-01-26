#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 12

float soma(float matriz[MAX][MAX]){
    float soma = 0;
    for(int i = 0; i < MAX; i++){
        for(int j = i+1; j < MAX; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}

float media(float matriz[MAX][MAX]){
    float aux = 0, media = 0;
    for(int i = 0; i < MAX; i++){
        for(int j = i+1; j < MAX; j++){
            aux += matriz[i][j];
        }
    }
    media = aux / ((MAX-1) * MAX / 2);
    return media;
}

int main() {
    float matriz[MAX][MAX];
    char op;
    scanf(" %c", &op);

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            scanf("%f", &matriz[i][j]);
        }
    }

    if(op == 'S'){
        printf("%.1f\n" , soma(matriz));
    }

    if(op == 'M'){
        printf("%.1f\n" , media(matriz));
    }

    return 0;
}
