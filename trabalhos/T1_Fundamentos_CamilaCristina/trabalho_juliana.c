#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <windows.h>

//compilador usado: MinGW
//windows 11

int bintodec(int bin) {
    int dec = 0, resto, exp = 0;

    while (bin != 0) {
        resto = bin % 10;
        dec += resto * (1 << exp);
        exp++;
        bin /= 10;
    }
    return dec;
}

int octaltodec(int oct) {
    int dec = 0, resto, exp = 0;

    while (oct != 0) {
        resto = oct % 10;
        dec += resto * pow(8, exp);
        exp++;
        oct /= 10;
    }
    return dec;
}

int hexatodec(char hex[]) {
    int dec = 0, tamanho = strlen(hex), exp = 0;

    for (int i = tamanho - 1; i >= 0; i--) {
        int valor;

        if (hex[i] >= '0' && hex[i] <= '9') {
            valor = hex[i] - '0';
        } else if (hex[i] >= 'A' && hex[i] <= 'F') {
            valor = hex[i] - 'A' + 10;
        } else if (hex[i] >= 'a' && hex[i] <= 'f') {
            valor = hex[i] - 'a' + 10;
        } else {
            // Caractere inválido encontrado
            printf("Erro: Caractere hexadecimal inválido: %c\n", hex[i]);
            return -1;
        }

        dec += valor * pow(16, exp);
        exp++;
    }

    return dec;
}

int dectobin(int dec) {
    int bin = 0, resto, fator = 1;

    while (dec != 0) {
        resto = dec % 2;
        dec /= 2;
        bin += resto * fator;
        fator *= 10;
    }

    return bin;
}

int dectooct(int dec) {
    int oct = 0, exp = 1;

    while (dec != 0) {
        oct += (dec % 8) * exp;
        dec /= 8;
        exp *= 10;
    }

    return oct;
}

char* dectohexa(int dec) {
    static char hex[100];
    int indice = 0;

    while (dec != 0) {
        int resto = dec % 16;

        if (resto < 10) {
            hex[indice] = resto + '0';
        } else {
            hex[indice] = resto - 10 + 'A';
        }

        dec /= 16;
        indice++;
    }

    // Reverter a string hexadecimal
    for (int i = 0, j = indice - 1; i < j; i++, j--) {
        char temp = hex[i];
        hex[i] = hex[j];
        hex[j] = temp;
    }

    hex[indice] = '\0';  // Adicionar o terminador nulo

    return hex;
}

int main() {
    int op, op2;
    char resp;

    do {
        system("cls");
        Sleep(750);

        printf("===== Base inicial =====\n");
        printf("1. Decimal\n");
        printf("2. Binaria\n");
        printf("3. Octal\n");
        printf("4. Hexadecimal\n");
        printf("\nDigite a base escolhida: ");
        scanf("%d", &op);

        system("cls");
        Sleep(750);

        if (op == 1 || op == 2 || op == 3 || op == 4) {
            printf("===== Base final =====\n");
            printf("1. Decimal\n");
            printf("2. Binaria\n");
            printf("3. Octal\n");
            printf("4. Hexadecimal\n");
            printf("\nDigite a base escolhida: ");
            scanf("%d", &op2);

            system("cls");
            Sleep(750);

            if (op2 != 1 && op2 != 2 && op2 != 3 && op2 != 4) {
                printf("\nOpcao invalida. Por favor, escolha novamente.\n");
            }
        } else {
            printf("\nOpcao invalida. Por favor, escolha novamente.\n");
        }

        if(op == op2){
            printf("Conversao invalida; as bases sao iguais. Tente converter para bases diferentes");
        }
        else if (op == 1 && op2 == 2) {
            int bin, dec;

            printf("Digite um numero decimal: ");
            scanf("%d", &dec);
            bin = dectobin(dec);

            printf("O numero decimal %d em binario eh: %d\n", dec, bin);
        } else if (op == 1 && op2 == 3) {
            int oct, dec;

            printf("Digite um numero decimal: ");
            scanf("%d", &dec);
            oct = dectooct(dec);

            printf("O numero decimal %d em octal eh: %d\n", dec, oct);
        } else if (op == 1 && op2 == 4) {
            int dec;
            char* hex;

            printf("Digite um numero decimal: ");
            scanf("%d", &dec);
            hex = dectohexa(dec);

            printf("O numero decimal %d em hexadecimal eh: %s\n", dec, hex);
        } else if (op == 2 && op2 == 1) {
            int bin, dec;

            printf("Digite um numero binario: ");
            scanf("%d", &bin);
            dec = bintodec(bin);

            printf("O numero binario %d em decimal eh: %d\n", bin, dec);
        } else if (op == 2 && op2 == 3) {
            int bin, dec, octa;

            printf("Digite um numero binario: ");
            scanf("%d", &bin);

            dec = bintodec(bin);
            octa = dectooct(dec);

            printf("O numero binario %d em octal eh: %d\n", bin, octa);
        } else if (op == 2 && op2 == 4) {
            int bin, dec;
            char* hex;

            printf("Digite um numero binario: ");
            scanf("%d", &bin);

            dec = bintodec(bin);
            hex = dectohexa(dec);

            printf("O numero binario %d em hexadecimal eh: %s\n", bin, hex);
        } else if (op == 3 && op2 == 1) {
            int oct, dec;

            printf("Digite um numero octal: ");
            scanf("%d", &oct);
            dec = octaltodec(oct);

            printf("O numero octal %d em decimal eh: %d\n", oct, dec);
        } else if (op == 3 && op2 == 2) {
            int oct, dec, bin;

            printf("Digite um numero octal: ");
            scanf("%d", &oct);

            dec = octaltodec(oct);
            bin = dectobin(dec);

            printf("O numero octal %d em binario eh: %d\n", oct, bin);
        } else if (op == 3 && op2 == 4) {
            int oct, dec;
            char* hex;

            printf("Digite um numero octal: ");
            scanf("%d", &oct);

            dec = octaltodec(oct);
            hex = dectohexa(dec);

            printf("O numero octal %d em hexadecimal eh: %s\n", oct, hex);
        } else if (op == 4 && op2 == 1) {
            char hex[100];
            int dec;

            printf("Digite um numero hexadecimal: ");
            scanf("%s", hex);
            dec = hexatodec(hex);

            printf("O numero hexadecimal %s em decimal eh: %d\n", hex, dec);
        } else if (op == 4 && op2 == 2) {
            char hex[100];
            int dec, bin;

            printf("Digite um numero hexadecimal: ");
            scanf("%s", hex);
            dec = hexatodec(hex);
            bin = dectobin(dec);

            printf("O numero hexadecimal %s em binario eh: %d\n", hex, bin);
        } else if (op == 4 && op2 == 3) {
            char hex[100];
            int dec, octal;

            printf("Digite um numero hexadecimal: ");
            scanf("%s", hex);
            dec = hexatodec(hex);
            octal = dectooct(dec);

            printf("O numero hexadecimal %s em octal eh: %d\n", hex, octal);
        }

        printf("\nDeseja rodar novamente? (s/n): ");
        scanf(" %c", &resp);

    } while (resp == 's' || resp == 'S');

    system("cls");
    
    printf("   __     __\n  /_/|   |\\_\\ \n   |U|___|U|\n   |       |\n   | ,   , |\n  (  = Y =  )      Obrigada e volte sempre!!\n   |   `   |\n  /|       |\ \n   \| |   | |/\n (_|_|___|_|_)\n   '\"'   '\"'\n");

    return 0;
}

