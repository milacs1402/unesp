#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>


typedef struct nome{
        int info;
        struct nome *prox;
}*no;

void inclui_final(no *lista, int info){
    no p = (no) malloc(sizeof(struct nome));
    no q = (no) malloc(sizeof(struct nome));
    p -> info= info;
    p -> prox = NULL;

    if(*lista == NULL){
        *lista = p;
    }
    else{
        no q = *lista;
    }

    while(q->prox){
        q = q->prox;
    }
    q -> prox = p;
}



int main() {
    //pra criar lista -> lista = NULL
    no p, lista = NULL;
    int num=0, aux=0;

    
    for(int i=0; i<10; i++){
        p = (no)malloc(sizeof(struct nome));
        p -> info = i;
        p -> prox = lista;
       lista = p;
       aux++;
    }

    while(aux--){
        printf("%d ", p->info);
        p=p->prox;
    }

    printf("\n");

    scanf("%d", &num);

    printf("\n");

    while((p->prox) != NULL){
        p = (p->prox);
    }

    p->prox = num;
    aux++;

    while(aux--){
        printf("%d ", p->info);
        p=p->prox;
    }
    
    return 0;
}
