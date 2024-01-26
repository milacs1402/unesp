#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int MDC(int n1, int n2){
    int mdc=0;
    //TODO função de comparação da maior variavel
    if(n2%n1==0){
        mdc=n1;
        return n1;
    }
    return MDC(n2, n2%n1);
}

int main() {
    int n1, n2;

    scanf("%d %d", &n1, &n2);
    printf("o mdc entre %d e %d eh %d", n1, n2, MDC(n1, n2));

    return 0;
}
