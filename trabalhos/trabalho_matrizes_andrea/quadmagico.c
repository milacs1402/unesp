#include <stdio.h>

#define MAX 50

int ehQuadradoMagico(int n, int matriz[][MAX]) {
    int soma = 0;  // Soma esperada para todas as linhas, colunas e diagonais
    int somaAtual; // Soma atual de uma linha, coluna ou diagonal

    // Calcula a soma esperada
    for (int i = 0; i < n; i++) {
        soma += matriz[0][i];
    }

    // Verifica as somas das linhas
    for (int i = 0; i < n; i++) {
        somaAtual = 0;
        for (int j = 0; j < n; j++) {
            somaAtual += matriz[i][j];
        }
        if (somaAtual != soma) {
            return 0;
        }
    }

    // Verifica as somas das colunas
    for (int j = 0; j < n; j++) {
        somaAtual = 0;
        for (int i = 0; i < n; i++) {
            somaAtual += matriz[i][j];
        }
        if (somaAtual != soma) {
            return 0;
        }
    }

    // Verifica a soma da diagonal principal
    somaAtual = 0;
    for (int i = 0; i < n; i++) {
        somaAtual += matriz[i][i];
    }
    if (somaAtual != soma) {
        return 0;
    }

    // Verifica a soma da diagonal secundária
    somaAtual = 0;
    for (int i = 0; i < n; i++) {
        somaAtual += matriz[i][n - i - 1];
    }
    if (somaAtual != soma) {
        return 0;
    }

    // Se todas as somas forem iguais, é um quadrado mágico
    return 1;
}

int main() {
    int n;
    int matriz[MAX][MAX];

    printf("Insira a ordem da sua matriz quadrada: ");
    scanf("%d", &n);

    printf("Insira os elementos da sua matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (ehQuadradoMagico(n, matriz)) {
        printf("A matriz eh um quadrado magico.\n");
    } else {
        printf("A matriz nao eh um quadrado magico.\n");
    }

    return 0;
}
