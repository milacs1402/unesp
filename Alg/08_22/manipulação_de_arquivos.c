/* ponteiro de arquivo */
/* 

Declara-se um ponteiro de arquivo da seguinte maneira:
FILE *arq; -- File precisa estar em letras maiusculas!!

feita a declaração, é preciso:

1. associar a variavel arq ao nome externo desse arquivo e explicitar o tipo de operação que será realizada com esse arquivo
2. abrir o arquivo com a função fopen()
SINTAXE: FILE *fopen(char *nome_do_arquivo, char *modo);
    nome_do_arquivo é o nome externo; determina qual arquivo será aberto
    modo válidos de abertura de arquivo:
        "r" ou "rt"- abre um arquivo texto para leitura (arquivo já precisa existir)
        "w" ou "wt"- abre um arquivo para gravação (se não existir, cria um; se já existir, conteudo anterior será destruído)
            abrir no modo write SEMPRE começa do zero!!! ele pode destruir arquivos, tomar cuidado
        "a" ou "at"- abre um arquivo para gravação tbm (se o arquivo não existir, ele cria; se existir, ele add no final do arquivo)
        OBS: para arquivos FILE binarios, é só colocar o 'b' dps ("rb", "wb", "ab");
        "r+b"- vai abrir o arquivo para ler e gravar, mas o arquivo já precisa existir
        "w+b"- vai abrir o arquivo para ler e gravar tbm, mas o arquivo será criado ou começará do zero
        
    Para saber se a fopen() realmente criou ou abriu o arquivo solicitado, deve-se verificar se a variavel que representa o arquivo possui algum valor
    Se for NULL, o arquivo não foi aberto
    EXEMPLO:

    if((arquivo = fopen("exemplo.dat", "wb")) == NULL){
        printf("\n Erro de abertura de arquivo");
        exit(1);
    }

3. manipular o arquivo (ler, gravar ou ambos)

    fwrite() e fread(), sempre. (no arquivo binário, né)
    SINTAXE: unsigned fwrite (void *buffer, int numero_de_bytes, int qte, FILE *arq);

4. fechar 
SINTAXE: int fclose(FILE *arquivo);
    fechar um arquivo faz com que toda informação que tenha permanecido no "buffer" associado ao fluxo de saída seja gravada
    OBS: a função exit() sai do programa e fecha todos os arquivos abertos pelo programa
-dois tipos de arquivo: FILE binario e FILE texto

 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

struct duo{
    char dia[3], mes[3], ano[5];
};

struct registro{
    char num[30];
    char nome[45];
    char saldo[60];
    struct duo data; 
};

int main() {
    struct registro func;
    FILE *arq;
    char resp;

    arq=fopen("registro.dat", "wb");

    if((arq)==NULL){
        printf("\nERRO");
        exit(1);
    }

    do{
        fflush(stdin);
        printf("\n\n Insira o numero da conta: ");
        gets(func.num);
        printf("\n\n Insira o nome do funcionario: ");
        gets(func.nome);
        printf("\n\n Insira o saldo: ");
        gets(func.saldo);
        printf("\n\n Insira a data da ultima operacao: ");
        scanf("%s %s %s", func.data.dia, func.data.mes, func.data.ano );
        system("cls");

        fwrite(&func, sizeof(func), 1, arq);
        printf("\n\nDeseja cadastrar outro funcionario?  (S/N)\n");

        do{
            resp = toupper(getch());

            if(resp != 'S' && resp != 'N'){
                printf("\nResposta Invalida");
            }
        }while(resp != 'S' && resp != 'N');
    }while(resp=='S');

    fclose(arq);
    return 0;
}

 