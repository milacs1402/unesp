#include <stdio.h>

void simetria(int linha, int coluna, int matriz[linha][coluna]){
    for(int i=0; i<linha;i++){
        for(int j=0; j<coluna; j++){
            if(matriz[i][j]!=matriz[j][i]){
                printf("\nmatriz nao simetrica");
                return;
            }
        }
    }
    printf("\nmatriz simetrica");
}

int main(){
    int linha, coluna;
    printf("Insira a ordem da sua matriz:\n");
    scanf("%d %d", &linha, &coluna);
    int matriz[linha][coluna];

    printf("insira os elementos da sua matriz:\n");
    
    for(int i=0; i<linha; i++){
        for(int j=0; j<coluna; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
    
    simetria(linha, coluna, matriz);
    return 0;
}