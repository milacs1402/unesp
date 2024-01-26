#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//modo iterativo

int fatI(int n){
    int fat=1;

    for(int i=1; i<=n; i++){
        fat*=i;
    }
    return fat;
}

//modo recursivo

int fatR(int n){
    if(n==2){
        return 2;
    }
    else{
        return n*fatR(n-1);
    }
}



int main() {

    int n;

    scanf("%d", &n);

    printf("fatorial iterativa: %d", fatI(n));
    printf("\nfatorial recursivo: %d", fatR(n));
    
    return 0;
}
