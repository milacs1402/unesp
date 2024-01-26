#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

struct duo{
    char dia[3], mes[3], ano[5];
};

struct registro{
    char num[30];
    char nome[45];
    char saldo[60];
    struct duo data; 
};

int main() {
    struct registro func;
    FILE *arq;
    char resp;

    arq=fopen("registro.dat", "wb");

    if((arq)==NULL){
        printf("\nERRO");
        exit(1);
    }

    do{
        fflush(stdin);
        printf("\n\n Insira o numero da conta: ");
        gets(func.num);
        printf("\n\n Insira o nome do funcionario: ");
        gets(func.nome);
        printf("\n\n Insira o saldo: ");
        gets(func.saldo);
        printf("\n\n Insira a data da ultima operacao: ");
        scanf("%s %s %s", func.data.dia, func.data.mes, func.data.ano );
        system("cls");

        fwrite(&func, sizeof(func), 1, arq);
        printf("\n\nDeseja cadastrar outro funcionario?  (S/N)\n");

        do{
            resp = toupper(getch());

            if(resp != 'S' && resp != 'N'){
                printf("\nResposta Invalida");
            }
        }while(resp != 'S' && resp != 'N');
    }while(resp=='S');

    fclose(arq);
    return 0;
}