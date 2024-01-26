#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

typedef struct no{
    int valor;
    struct no *prox;
}no;

void insere_inicio(no **lista, int num){
    no *novo = malloc(sizeof(no));

    novo->valor = num;

    if(!*lista){
        novo-> prox = novo;
        *lista = novo;
    }
    else{
        no *aux = *lista;
        
        
        while(aux->prox != *lista){
            aux = aux->prox;
        }

        aux->prox = novo;
        novo->prox = *lista;
        *lista = novo;
    }
}

void insere_final(no **lista, int num){
    no *novo = malloc(sizeof(no));

    novo->valor = num;

    if(!*lista){
        novo-> prox = novo;
        *lista = novo;
    }
    else{
        no *aux = *lista;
        
        while(aux->prox != *lista){
            aux = aux->prox;
        }

        aux->prox = novo;
        novo->prox = *lista;
    }
}

void apaga_num(no** lista, int num) {
    no* aux = *lista;
    no* p = NULL;

    // Check if the list is empty
    if (*lista == NULL) {
        return;
    }

    // Check if the first node contains the value to be deleted
    if (aux != NULL && aux->valor == num) {
        *lista = aux->prox;
        free(aux);
        return;
    }

    // Traverse the list to find the node with the specified value
    while (aux != NULL && aux->prox != NULL && aux->prox->valor != num) {
        aux = aux->prox;
    }

    // If the value is not found
    if (aux == NULL || aux->prox == NULL) {
        return;
    }

    // Delete the node with the specified value
    p = aux->prox;
    aux->prox = aux->prox->prox;
    free(p);
}

void print(no *p){
    no *aux = p;

    system("cls");
    printf("\nLista:\n");

    do{
        printf("%d ", p->valor);
        p = p->prox;
    }while(p != aux);

    printf("\n");
    
}


int main() {
    int op, num;
    no *lista=NULL;

    do{
        printf("0 - sair\n1 - inserir no inicio\n2 - inserir no final\n3 - printar lista\n4 - apagar elemento\n");
        scanf("%d", &op);

        if(op==1){
            system("cls");
            printf("Digite o numero que deseja inserir: ");
            scanf("%d", &num);
            insere_inicio(&lista, num);
            system("cls");
        }
        if(op==2){
            system("cls");
            printf("Digite o numero que deseja inserir: ");
            scanf("%d", &num);
            insere_final(&lista, num);
            system("cls");
        }
        if(op==3){
            system("cls");
            print(lista);
            getchar();
        }
        if(op==4){
            system("cls");
            printf("Digite o numero que deseja apagar: ");
            scanf("%d", &num);
            apaga_num(&lista, num);
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
