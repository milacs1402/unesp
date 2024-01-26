#include <stdio.h>

//n é a ordem da matriz
int quadlatino(int n, int matriz[][n]) {
    int freq[n+1]; // Array para contar a frequência de ocorrência dos numeros

    // Verificar cada linha
    for (int i = 0; i < n; i++) {
        // Inicializar o array de frequência para cada linha
        for (int j = 1; j <= n; j++) {
            freq[j] = 0; //colocando 0 em todas as posições do vetor
        }

        // Verificar a ocorrência dos numeros em cada linha
        for (int j = 0; j < n; j++) {
            int aux = matriz[i][j];

            if (freq[aux] == 1) {
                return 0;
            }
            freq[aux] = 1;
        }
    }

    // Verificar cada coluna
    for (int j = 0; j < n; j++) {
        // Reinicializar o array de frequência para cada coluna
        for (int i = 1; i <= n; i++) {
            freq[i] = 0;
        }

        // Verificar a ocorrência dos numeros em cada coluna
        for (int i = 0; i < n; i++) {
            int aux = matriz[i][j];

            if (freq[aux] == 1) {
                return 0;
            }
            freq[aux] = 1;
        }
    }

    // Se passar pelas verificações, é um quadrado latino
    return 1;
}

int main() {
    int n;
    printf("Digite a ordem da matriz: ");
    scanf("%d", &n);

    int matriz[n][n];

    printf("Digite os elementos da matriz:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    if (quadlatino(n, matriz)){
        printf("A matriz eh um quadrado latino.\n");
    } 
    
    else {
        printf("A matriz nao eh um quadrado latino.\n");
    }

    return 0;
}