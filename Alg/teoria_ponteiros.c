/* basicamente, o ponteiro serve para acessar um espaço de memória
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <conio.h>
#include <math.h>

int main() {
    int x;
    x = 10; //eu usei um espaço de memoria para guardar minha variavel x com valor 10

    printf("%d\n", x); //isso, obviamente, vai printar o valor de x, não o endereço da variavel
    printf("%d\n", &x); // agr, ele ja printa o endereço da minha variavel (ainda não é um ponteiro) 

    return 0;
}

//agr, usando ponteiros

int main() {

    int x;
    x = 10; 

    int *ponteiro; //é importante declarar o tipo de informação que o ponteiro irá apontar, nesse caso, int
    ponteiro = &x;

    printf("%d\n", ponteiro); //vai printar o endereço de memória
    printf("%d\n", *ponteiro); // printa o valor de x, 10, já que esse meu ponteiro está pegando oq está dentro do endereço para o qual ele aponta

    return 0;

}
