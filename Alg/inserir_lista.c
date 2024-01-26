#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

// inserir elementos numa lista encadeada

typedef struct no{
    int valor;
    struct no *prox;
}no;

void inserir_inicio(no **lista, int num){
    no *novo = malloc(sizeof(no));

    if(novo){
        novo->valor = num;
        novo->prox = *lista;
        *lista = novo;    

    }
    else
        printf("Erro ao inserir novo elemento");

}

void inserir_final(no **lista, int num){
    no *aux, *novo = malloc(sizeof(no));

    system("cls");

    if(novo){
        novo->valor=num;
        novo->prox=NULL;

        if(*lista==NULL){
            *lista = novo;
        }
        else{
            aux = *lista;
            while(aux->prox){
                aux = aux->prox;
            }
            aux->prox = novo;
        }
    }
    else
        printf("Erro ao inserir novo elemento");
}

void inserir_meio(no **lista, int num,  int anterior){ //quero inserir o novo logo após o parametro "anterior"x
    no *aux, *novo = malloc(sizeof(no));
    
    system("cls");

    if(novo){
        novo->valor=num;

        if(*lista==NULL){
            novo->prox=NULL;
            *lista=novo;
        }
        else{
            aux=*lista;

            while(aux->valor != anterior && aux->prox){
                aux=aux->prox;
            }
            novo->prox = aux->prox;
            aux->prox = novo;            
        }
    }
    else    
        printf("Erro ao inserir novo elemento");

}

void print(no *no){
    system("cls");
    printf("\nLista:\n");

    while(no){
        printf("%d ", no->valor);
        no = no->prox;
    }

    printf("\n");
    
}

int main() {
    int op, num, anterior;
    no *lista=NULL;

    do{
        printf("0 - sair\n1-inserir no inicio\n2-inserir no meio\n3-inserir no final\n4-printar lista\n");
        scanf("%d", &op);

        if(op==1){
            system("cls");
            printf("Digite o numero que deseja inserir: ");
            scanf("%d", &num);
            inserir_inicio(&lista, num);
            system("cls");
        }
        if(op==2){
            system("cls");
            printf("Digite o numero que deseja inserir: ");
            scanf("%d", &num);
            printf("\n");
            printf("Apos qual valor deseja inserir esse numero? ");
            scanf("%d", &anterior);
            inserir_meio(&lista, num, anterior);
            system("cls");
        }
        if(op==3){
            system("cls");
            printf("Digite o numero que deseja inserir: ");
            scanf("%d", &num);
            inserir_final(&lista, num);
            system("cls");
        }
        if(op==4){
            system("cls");
            print(lista);
            getchar();
        }

        
    }while(op);
    
    // Liberação de memória
    while (lista) {
        no *temp = lista;
        lista = lista->prox;
        free(temp);
    }

    return 0;
}
