#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

float fatI (int n) {
    float aux=1;
    for(int i=2; i<=n; i++){
        aux+=1;
    }
    return aux;
}

float fatR(int n){
    if(n<=1){
        return 1;
    }
    return n*fatR(n-1);
}


int main() {

    return 0;
}
