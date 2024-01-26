//função que retorna 1 se um valor for positivo, 0 se for nulo e -1 se for negativo

#include <stdio.h>

int fun(int n){
    if(n>0) 
        return 1;
    if(n==0)
        return 0;
    else
        return -1;
}

int main() {
    int valor;
    scanf("%d", &valor);
    printf("%d", fun(valor));
    return 0;
}
