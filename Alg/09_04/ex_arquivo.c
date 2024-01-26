#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
int main(){
    FILE *resultado;
    int linha, coluna, elementoM1, elementoM2;

    printf("Digite a ordem (linha e coluna) das suas matrizes:\n");
    scanf("%d %d", &linha, &coluna);

    int matriz1[linha][coluna], matriz2[linha][coluna];

    for(int i=0; i<linha; i++){
        for(int j=0; i<coluna; i++){
            
            scanf("%d", matriz1[i][j]);

        }
    }

    for(int i=0; i<linha; i++){
        for(int j=0; i<coluna; i++){
            
            scanf("%d", matriz2[i][j]);

        }
    }
    
    return 0;
}
