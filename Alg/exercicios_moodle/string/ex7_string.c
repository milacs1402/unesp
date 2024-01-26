#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main() {
    char string[30];

    gets(string);

    for(int i=0; i<strlen(string); i++){
        if(toupper(string[i])=='A' || toupper(string[i])=='E' || toupper(string[i])=='I' || toupper(string[i])=='O' || toupper(string[i])=='U'){
        }
        else if(toupper(string[i])>='B' && toupper(string[i])<='Z' ){
            printf("%c", string[i]);
        }
        else if(string[i]==' '){
            printf("%c", string[i]);
        }
    }
    return 0;
}
