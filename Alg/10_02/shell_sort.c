#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

void shell_sort(int n, int v[n]){
    int gap=5, aux=0;

    while(gap>0){
        for(int i=0; i<n; i++){
            for(int j=i+gap; j<=n-gap; j++){

                if(v[i]>v[j]){
                    aux=v[j];
                    v[j]=v[i];
                    v[i]=aux;
                }
            }
        }
        gap--;
    }

}

int main() {
    int vet[10]={3,8,6,4,1,0,9,2,5,7};
    int n=10;

    printf("vetor original -> ");

    for(int i=0; i<n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");

    shell_sort(n, vet);

    printf("vetor ordenado -> ");

    for(int i=0; i<n; i++){
        printf("%d ", vet[i]);
    }
    printf("\n");
    
    return 0;
}
