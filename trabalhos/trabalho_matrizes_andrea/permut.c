#include <stdio.h>

int permut(int matriz[][50], int n) {

    // Verificar cada linha
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 0; j < n; j++) {
            if (matriz[i][j] == 1) {
                count++;
            } 
            else if (matriz[i][j] != 0) {
                return 0;  // Encontrou um valor diferente de 0 ou 1
            }
        }
        if (count != 1) {
            return 0;  // Não contém exatamente um elemento 1
        }
    }

    // Verificar cada coluna
    for (int j = 0; j < n; j++) {
        int count = 0;
        for (int i = 0; i < n; i++) {
            if (matriz[i][j] == 1) {
                count++;
            } 
            else if (matriz[i][j] != 0) {
                return 0;  // Encontrou um valor diferente de 0 ou 1
            }
        }
        if (count != 1) {
            return 0;  // Não contém exatamente um elemento 1
        }
    }

    return 1;
}

int main() {
    int n;
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);

    int matriz[50][50];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (permut(matriz, n)) {
        printf("A matriz eh uma matriz de permutacao.\n");
    } 
    else {
        printf("A matriz nao eh uma matriz de permutacao.\n");
    }

    return 0;
}
