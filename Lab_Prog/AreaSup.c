#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 12

double soma(double matriz[MAX][MAX]){
    double soma = 0;
    for(int i = 0; i < 5; i++){
        for(int j = i+1; j < MAX-1-i; j++){
            soma += matriz[i][j];
        }
    }
    return soma;
}

double media(double matriz[MAX][MAX]){
    double media = 0;
    media = soma(matriz) / ((MAX-2) * MAX / 4.);
    return media;
}

int main() {
    double matriz[MAX][MAX];
    char op;
    scanf(" %c", &op);

    for(int i = 0; i < MAX; i++){
        for(int j = 0; j < MAX; j++){
            scanf("%lf", &matriz[i][j]);
        }
    }

    if(op == 'S'){
        printf("%.1lf\n" , soma(matriz));
    }

    if(op == 'M'){
        printf("%.1lf\n" , media(matriz));
    }

    return 0;
}
