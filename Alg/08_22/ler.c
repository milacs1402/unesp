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

    arq=fopen("registro.dat", "rb");
    if(!arq){
        printf("ERRO AO ABRIR O ARQUIVO");
        exit(1);
    }


    while(fread(&func, sizeof(struct registro), 1, arq)){
        printf("Numero da conta: %s\n", func.num);
        printf("Nome do funcionario: %s\n", func.nome);
        printf("Saldo: %s\n", func.saldo);
        printf("Data da ultima operacao: %s/%s/%s\n\n", func.data.dia, func.data.mes, func.data.ano);
    }
    fclose(arq);
    return 0;
}
