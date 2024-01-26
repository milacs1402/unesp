#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

typedef struct{
    int dia;
    int mes;
    int ano;
}data;

typedef struct{
    char nome[30];
    long long int RG;
    data nascimento;
    char profissao[30];
}pessoa;

int inserir(pessoa vet[], int max) {
    FILE * arq=fopen("pessoas.txt", "r+");
    pessoa novo;
    
    if(!arq){
        exit(1);
    }
    
    system("cls");

    printf("Nome: ");
    fflush(stdin);
    gets(novo.nome);
    printf("\nRG: ");
    scanf("%d", &novo.RG);
    printf("\nData de nascimento (dd/mm/aa): ");
    fflush(stdin);
    scanf("%d/%d/%d", &novo.nascimento.dia, &novo.nascimento.mes, &novo.nascimento.ano);
    printf("\nProfissao: \n");
    gets(novo.profissao);

    system("cls");

    for (int i = 0; i <= max; i++) {
        if (novo.RG <= vet[i].RG) {
            for (int j = max; j > i; j--) {
                vet[j] = vet[j - 1];
            }
            vet[i] = novo;
            break; 
        }
    }
    
    return max + 1; 
}

int remover(pessoa vet[], int max){
    FILE * arq=fopen("pessoas.txt", "r+");
    long long int rg=0;
    int aux=0;

    if(!arq){
        exit(1);
    }

    system("cls");

    printf("Insira o RG da pessoa que deseja remover: ");
    scanf("%lld", &rg);

    for(int i=0; i<=max; i++){
        if(vet[i].RG == rg){
            for(int j=i; j<=max; j++){
                vet[i]=vet[i+1];   
            }
            aux=1;
            printf("\n\nRemovido com sucesso");
        }
    }

    if(!aux){
        printf("\n\nRG não encontrado");
    }

    return max - 1;
}

void mostrar(pessoa vet[], int max){
    FILE * arq=fopen("pessoas.txt", "r+");

    if(!arq){
        exit(1);
    }

    system("cls");

    for( int i = 0; i<=max; i++){

        printf("%c\n", vet[i].nome);
        printf("%lld\n", vet[i].RG);
        printf("%d/%d/%d\n", &vet[i].nascimento.dia, &vet[i].nascimento.mes, &vet[i].nascimento.ano);
        printf("%c\n", vet[i].profissao);
        printf("\n\n");
    }

}

void contar(pessoa vet[], int max){
    FILE * arq=fopen("pessoas.txt", "r+");
    int count;
    

    if(!arq){
        exit(1);
    }

    system("cls");

    for( int i = 0; i<=max; i++){

        count++;
    }

    ptintf("A lista contem %d elementos.", count);

}

void procura_RG(pessoa vet[], int max){
    FILE * arq=fopen("pessoas.txt", "r+");
    long long int rg=0;
    int aux=0;

    if(!arq){
        exit(1);
    }

    system("cls");

    printf("Insira o RG da pessoa que deseja procurar: ");
    scanf("%lld", &rg);

    for(int i=0; i<=max; i++){
        if(vet[i].RG == rg){

        printf("%c\n", vet[i].nome);
        printf("%lld\n", vet[i].RG);
        printf("%d/%d/%d\n", &vet[i].nascimento.dia, &vet[i].nascimento.mes, &vet[i].nascimento.ano);
        printf("%c\n", vet[i].profissao);
            
        }
    }

    if(!aux){
        printf("\n\nRG não encontrado");
    }
}

void mais30(pessoa vet[], int max){
    FILE * arq=fopen("pessoas.txt", "r+");
    int aux=0;
    

    if(!arq){
        exit(1);
    }

    system("cls");

    for(int i=0; i<=max; i++){
        if((2023 - vet[i].nascimento.ano) > 30){

        printf("%c\n", vet[i].nome);
        printf("%lld\n", vet[i].RG);
        printf("%d/%d/%d\n", &vet[i].nascimento.dia, &vet[i].nascimento.mes, &vet[i].nascimento.ano);
        printf("%c\n", vet[i].profissao);
        aux=1;
        }
    }

    if(!aux){
        printf("\n\nNinguem com mais de 30 anos foi encontrado.");
    }

}

void ord_nome(pessoa vet[], int max){]
    FILE * arq=fopen("pessoas.txt", "r+");
    

    if(!arq){
        exit(1);
    }

    system("cls");

    

}



int main() {
    int op, max=0;
    pessoa vet[max];

    printf("Escolha uma das opcoes abaixo:\n\n");
    printf("1-Inserir novo elemento na lista\n");
    printf("2-Remover elemento da lista\n");
    printf("3-Mostrar elementos da lista\n");
    printf("4-Contar numero de elementos da lista\n");
    printf("5-Procurar um elemento pelo RG\n");
    printf("6-Mostrar o nome e a profissão de todos acima de 30 anos\n");
    printf("7-Contar quantas profissões diferentes tem na lista\n");
    printf("8-Gerar lista ordenada pelo campo nome\n");
    printf("9-Gerar lista ordenada pelo campo RG\n");

    scanf("%d", &op);

    if(op == 1){
        inserir(vet, max);
    }
    if(op == 2){
        remover(vet, max);
    }
    if(op == 3){
        mostrar(vet, max);
    }
    if(op == 4){
        contar(vet, max);
    }   
    if(op == 5){
        procura_RG(vet, max);
    }
    if(op == 6){
        mais30(vet, max);
    }
    if(op == 7){
        profissoes(vet, max);
    }
    if(op == 8){
        ord_nome(vet, max);
    }
    if(op == 9){
        mostrar(vet, max);
    }
    return 0;
}
