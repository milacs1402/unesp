#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//modo iterativo

int soma(int n){

    int soma=0;

    for(int i=1; i<=n; i++){
        soma+=i;
    }
    return soma;
}

//modo recursivo

int somatorio(int n){
    if(n==0){
        return 0;
    }
    else{
    return n + somatorio(n-1);
    }
}


int main() {

    int n;

    scanf("%d", &n);

    printf("soma iterativa: %d", soma(n));
    printf("\nsoma recursiva: %d", somatorio(n));
    
    return 0;
}
