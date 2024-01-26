#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main() {

    struct REGISTRO{
        char telefone[15];
        char cidade[30];
    };

    struct TEMPO{
        int horas;
        int minutos;
        int segundos;
    };
    FILE *arquivo;

    if ((arquivo = fopen ("exemplo.dat","wb")) == NULL){
        printf ("Erro na abertura do arquivo.");
        exit (1);
    }
    


    return 0;
}
