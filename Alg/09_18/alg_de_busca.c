#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int buscaR(int n, int *v, int num){
    if(n==0){
        return -1;
    }
    else if(v[n-1]==num){
        return buscaR(n-1, v, num);
    }
}//essa função busca um número dentro de um vetor de forma recursiva, mas como ela checa todo o vetor atrás do num, ela custa mais caro em termos de operações

int buscaBinaria(int *v, int cmc, int fim, int num){
    int meio;
    meio = (fim+cmc)/2;
    if(num==v[meio]){
        return meio;
    }
    if (cmc>fim)
      return -1;
    else if(num>v[meio]){
        return buscaBinaria(v, meio+1, fim, num);
    }
        return buscaBinaria(v, cmc, meio-1, num);
    
}//a busca binaria gasta menos, já que ela pega a metade do vetor e vê se é maior ou menor que o num -> corta metade do vetor e dps pega a metade de novo
//vetor já precisa estar ordenado!!!!

int main() {
    int cmc=0, fim=10, num, v[]={2,4,6,8,10,12,14,16,18,20,22};
    /* int cmc=0, fim=1000, num, v[1000];

    for(int i=0; i<=1000; i++){
        v[i]=i;
    }  */

    printf("\nEscolha o numero que deseja buscar: ");
    scanf("%d", &num);

    if(buscaBinaria(v, cmc, fim, num)==-1){
         printf("\nO numero desejado nao foi encontrado\n\n");
    }
    else
        printf("\nO numero desejado esta na posicao %d\n\n", buscaBinaria(v, 0, fim, num));
    
    return 0;
}
