#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main() {
    char reverse[30], aux;

    gets(reverse);

    for(int i=strlen(reverse); i>=0; i--){
        printf("%c",reverse[i]);
    }
    return 0;
}
