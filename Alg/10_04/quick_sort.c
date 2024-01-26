#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

#define MAX 10

void quick_sort(int *vet, int inicio, int fim) {
    int i, j, pivo;
     
    i = inicio;
    j = fim;
    pivo = vet[(inicio + fim) / 2]; //poderia ser qualquer posição, mas começar do meio é poggers
     
    while(i <= j) {
        while(vet[i] < pivo && i < fim) {
            i++;
        }
        while(vet[j] > pivo && j > inicio) {
            j--;
        }

        if(i <= j) {
            int aux = vet[i];
            vet[i] = vet[j];
            vet[j] = aux;
            i++;
            j--;
        }
    }
     
    if(j > inicio) {
        quick_sort(vet, inicio, j);
    }
    if(i < fim) {
        quick_sort(vet, i, fim);
    }
}
 

int main() {
    int i, vet[MAX];

    printf("Digite os valores do vetor: ");

    for(i = 0; i < MAX; i++) {
        scanf("%d", &vet[i]);
    }

    quick_sort(vet, 0, MAX - 1);
    
    printf("\n\nVetor ordenado: ");
    for(i = 0; i < MAX; i++) {
        printf("%d ", vet[i]);
    }

    printf("\n");
    return 0;
}
 


