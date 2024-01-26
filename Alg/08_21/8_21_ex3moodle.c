#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>


typedef struct{
    int p, q;
}racional;

void reduz(int a,int b, racional *x){
    int num1, num2, resto;

    num1=a;
    num2=b;

    while (num1%num2 != 0){

        resto = num1 % num2;

        num1 = num2;
        num2 = resto;

    } // mdc esta em num2

    (*x).p = a/num2;
    (*x).q = b/num2;
}

 void mostraRacional (racional n){
    printf ("%d/%d",n.p,n.q);
} 

void neg(racional *n){

    (*n).p=-1*(*n).p;

} 

void soma(racional a, racional b){

    int soma_numerador, mmc ;
    racional x;

    mmc=(a.q) * (b.q);
    soma_numerador=(a.p)*(b.q)+(b.p)*(a.q);

    reduz (soma_numerador, mmc, &x);
    printf("%d/%d", x.p, x.q);

} 

void mult(racional a, racional b){

    int cima, baixo;
    racional x;

    cima=(a.p)*(b.p);
    baixo=(a.q)*(b.q);

    reduz(cima, baixo, &x);
    printf("%d/%d", x.p, x.q);
}

void divisao(racional a, racional b){
        int cimaDiv, baixoDiv;
        racional x;

        cimaDiv=(a.p)*(b.q);
        baixoDiv=(a.q)*(b.p);

        reduz(cimaDiv, baixoDiv, &x);
        printf("%d/%d", x.p, x.q);
    }

int main() {
    int op,num,dem,num2,dem2;
    racional x,y;
    char resp='S';

    while(toupper(resp)=='S'){
        system("cls");

        printf("Escolha uma das opcoes abaixo:\n");
        printf("1.Reduzir numero racional\n");
        printf("2.Transformar racional em negativo\n");
        printf("3.Somar dois racionais\n");
        printf("4.Multiplicar dois racionais\n");
        printf("5.Dividir dois racionais\n");
        printf("Opcao escolhida:");

        scanf("%d", &op);
        system("cls");

        while(op!=1 && op!=2 && op!=3 && op!=4 && op!=5){
            fflush(stdin);
            printf("\nResposta invalida.\nPor favor, digite novamente:\n");
            scanf("%d", &op);
            system("cls");
            
        }

        if(op==1){
            printf("Digite o racional na forma (numerador) -espaco- (denominador):\n");
            scanf("%d %d", &num, &dem);
            system("cls");

            reduz(num, dem, &x);
            printf ("%d/%d",x.p,x.q);
        }
        
        if(op==2){
            printf("Digite o racional na forma (numerador) -espaco- (denominador):\n");
            scanf("%d %d", &num, &dem);
            system("cls");

            reduz(num, dem, &x);
            neg(&x);
            printf("%d/%d", x.p, x.q);
        }

        if(op==3){
            printf("Digite o primeiro racional na forma (numerador) -espaco- (denominador):\n");
            scanf("%d %d", &num, &dem);
            printf("Digite o segundo racional na forma (numerador) -espaco- (denominador):\n");
            scanf("%d %d", &num2, &dem2);
            system("cls");

            reduz(num, dem, &x);
            reduz(num2, dem2, &y);
            soma(x,y);
            
        }

        if(op==4){
            printf("Digite o primeiro racional na forma (numerador) -espaco- (denominador):\n");
            scanf("%d %d", &num, &dem);
            printf("Digite o segundo racional na forma (numerador) -espaco- (denominador):\n");
            scanf("%d %d", &num2, &dem2);
            system("cls");

            reduz(num, dem, &x);
            reduz(num2, dem2, &y);
            mult(x,y);
            
        }

        if(op==5){
            printf("Digite o primeiro racional na forma (numerador) -espaco- (denominador):\n");
            scanf("%d %d", &num, &dem);
            printf("Digite o segundo racional na forma (numerador) -espaco- (denominador):\n");
            scanf("%d %d", &num2, &dem2);
            system("cls");

            reduz(num, dem, &x);
            reduz(num2, dem2, &y);
            divisao(x,y);
            
        }

        printf("\n\nDeseja rodar novamente? (S/N)\n");
        fflush(stdin);
        resp=getchar();
    }

    system("cls");
    printf("\nObrigada por usar o programa! :)\n\n");


    return 0;
}
