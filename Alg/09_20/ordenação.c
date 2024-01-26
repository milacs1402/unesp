#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

//ordenação interna: não necessitam de uma memoria secundaria e é feita na principal
//ordenação externa: quando o arquivo a ser ordenado n cabe na principal; tem que ser armazenado em disco

//métodos de ordenação
//buble sort -> compara com os vizinhos e tem complexidade n2
//insert sort
//select sort
//quick sort

void mostra_vec(int n, int v[]){
    for(int i=0; i<n; i++){
        printf("%d ", v[i]);
    }
    printf("\n\n");
}

void insertSort(int n, int v[]){
    int aux, i, j;
    for(i=1; i<n; i++){
        aux=v[i];
        for(j=i-1; (j>=0) && (aux<v[j]); j--){
            v[j+1]=v[j];
        }
        v[j+1] = aux;
    }
}


//TODO estudar e fazer algoritimos de sort; 
int main() {
    int vec[10]={2,45,1,23,222,34,12,4,63,68};
    
    mostra_vec(10,vec);
    insertSort(10,vec);
    mostra_vec(10,vec);
    getch();

    return 0;
}
