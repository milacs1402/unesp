#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo, *copia;

    if ((arquivo = fopen("lala.txt", "r")) == NULL) {
        printf("Erro na abertura do arquivo\n");
        printf("Pressione Enter para sair\n");
        getchar(); // Usar getchar() para aguardar a tecla Enter
        exit(1);
    }

    if ((copia = fopen("copia_lala.txt", "w")) == NULL) { // Abrir um novo arquivo para escrita
        printf("Erro na criacao do arquivo de copia\n");
        fclose(arquivo); // Fechar o arquivo original antes de sair
        printf("Pressione Enter para sair\n");
        getchar();
        exit(1);
    }

    int caractere;
    while ((caractere = fgetc(arquivo)) != EOF) {
        fputc(caractere, copia);
    }

    fclose(arquivo);
    fclose(copia);
    printf("\nArquivo copiado com sucesso para copia_lala.txt\n");

    return 0;
}
