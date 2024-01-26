#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//em C, existem 4 funções de alocação dinâmica na stdlib.h (2 principais agora):
//malloc() - aloca memória
//free() - libera memória

/* 
Sintaxe para alocação dinâmica

    pont = (*tipo) malloc (tam * sizeof(tipo));
    
        pont é o nome do ponteiro que recebe o endereço da memória alocada
        tipo é o tipo do ponteiro
        tam é o número de bytes
        
        obs: se o malloc() não funcionar, o pont retorna como NULL
        
Exemplo:
    int *vet -> declaração do ponteiro
    vet = (*int) malloc(num * sizeof(int));
    
Sintaxe free():
    free(pont);
    
    obs: o free() NÃO APAGA os dados que estavam na memória, apenas disponibiliza esse espaço para sobrescrever outros dados
    
Ligações entre espaços:
    uma variável contém o endereço do próx espaço de memória
    
Representação de listas por encadeamento:

    Lista encadeada - lista que vai crescendo conforme a minha necessidade através do encadeamento de nós
    (/) -> indica que esse espaço é nulo
    obs: o acesso não é direto
    
    - Cada nó precisa ser uma struct, pois vai conter informações de tipos diferentes
        lembrando que o último espaço precisa ser sempre o endereço do próximo nó
        
    Exemplo de struct:
    
        typedef struct nome{
            int info;
            struct nome *prox;
        }*no;

        o nome da struct é "nome", no é o endereço dela;
        então, sempre que eu criar outro nó, eu vou declarar ele como tipo no;
        
    TODA VEZ QUE UMA LISTA FOR CRIADA, COLOCAR NULL NELA!!
        struct nome *lista = NULL
        
    Acessar uma parte de um endereço
    no p;
    p=(no) malloc(sizeof(struct nome));
    (*p).info=10 ou p->info=10
    
    Para acessar e colocar um elemento no começo da lista:
        no p;
        p=(no) malloc(sizeof(struct nome));
        p->info = 10
        p->prox = *lista;
        *lista = p
        
    Mostrar os elementos de uma lista:
        no q;
        q = lista;

        while(q){
            printf("%d", q->info);
            q=q->prox
        }

    EU USO * QUANDO EU VOU ALTERAR A LISTA DENTRO DE UMA FUNÇÃO E QUERO QUE ALTERE FORA
        */
    
int main() {
    typedef struct nome{
        int info;
        struct nome *prox;
    } *no;

    no p, lista = NULL;
    int aux=0;
    
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

    

    printf("\n\nO numero de elementos da lista eh %d\n", aux);
    return 0;
}
