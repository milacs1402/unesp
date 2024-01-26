/* add bib <string.h> */
#include <stdio.h>
#include <string.h>
/* estrutura padrão de declaração de string*/
/* char str[x] */ //com x sendo o numero de caracteres da minha string

//faça um código para contar as vogais de uma palavra
int reprocessamento(){
    int i;
    do{
        printf("\nDeseja reprocessar?\t (sim- digite 1/nao- digite 0)");
        scanf("%d", &i);
        if(i!=1 && i!=0){
            printf("\n Numero inválido");
        }
    }while(i!=1 && i!=0);
    return i;
}

int main(){
    char frase[40];
    int cont;
    int i;
    do{
        printf("Digite uma frase: ");
        scanf("%s", frase);
        cont=0;
        for(int i=0; i<strlen(frase); i++){
            if(toupper(frase[i])=='A'||toupper(frase[i])=='E'||toupper(frase[i])=='I'||toupper(frase[i])=='O'||toupper(frase[i])=='U'){
                cont++;
            }
        }
        printf("\nNumero de vogais:%d", cont);
        i = reprocessamento();
    }while(i);
    return 0;
}
