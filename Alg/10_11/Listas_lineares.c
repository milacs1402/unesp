#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//exercício - pronto socorro


typedef struct {
    char nome[30];
    char cpf[15];
    int prioridade;
    int idade;
} paciente;

int cadastro(paciente vet[], int max) {
    paciente novo;
    
    system("cls");

    printf("Digite o nome do paciente: ");
    fflush(stdin);
    gets(novo.nome);
    printf("\nDigite a idade do paciente: ");
    scanf("%d", &novo.idade);
    printf("\nDigite o CPF do paciente: ");
    fflush(stdin);
    gets(novo.cpf);
    printf("\nQual o estado do paciente? (0-regular/1-ruim/2-pessimo)\n");
    scanf("%d", &novo.prioridade);

    system("cls");

    for (int i = 0; i <= max; i++) {
        if (novo.prioridade <= vet[i].prioridade) {
            for (int j = max; j > i; j--) {
                vet[j] = vet[j - 1];
            }
            vet[i] = novo;
            break; 
        }
    }
    
    return max + 1; 
}

int atendimento(paciente vet[], int max) {
    system("cls");
    
    if (max == 0) {
        printf("Nenhum paciente cadastrado.\n\n");
        return 0;
    }
    
    printf("Atendendo paciente: %s\n\n", vet[max-1].nome);
    
    return max-1;
    
}

int main() {
    paciente vet[100];
    int max = 0, aux = 0;

    while (1) {
        
        if(max){
            printf("Fila Atual:\n");
            for(int i=max-1; i>=0; i--){
                printf("%s\n", vet[i].nome);
            }
            printf("\n");
        }

        printf("1-Cadastrar paciente\n");
        printf("2-Atendimento\n");
        printf("3-Sair\n");
        scanf("%d", &aux);

        if (aux == 1) {
            max = cadastro(vet, max);
        } else if (aux == 2) {
            max = atendimento(vet, max);
        } else if (aux == 3) {
            break;
        } else {
            printf("Opção inválida. Tente novamente.\n");
        }
    }

    return 0;
}

