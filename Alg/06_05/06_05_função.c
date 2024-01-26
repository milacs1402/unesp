#include <stdio.h>

//tipo nomedafuncao(parametros){       parametro de entrada- eu informo o valor (tipo pow)
    //declaração de variaveis          parametro de saída- a função me retorna algo (scanf, por exemplo, já que ela me retorna o valor de &algumacoisa)
    //instruções                       o tipo da função é o que ela retorna (int, float, void-não retorna nada)
//}

void mensagem1(void){                  //pode ou não colocar void dentro do (), de qualquer jeito ela retorna nada pq não tem parametro

    printf("\nsou uma funcao\n");
}

void mensagem2(){
    printf("\nsou outra funcao\n");
}

void tracos(){   
    int i;
    printf("\n");
    for(i=1; i<=40; i++){
        printf("-");
    }
    printf("\n");     
}

 int main(){
    mensagem1();
    tracos();
    mensagem1();
    mensagem2();
    mensagem1();
    tracos();
    return 0;
} 

//mesmo código mas colocando uma quantidade de traços diferente e controlável

void mensagem1(void){                  
    printf("\nsou uma funcao\n");
}

void mensagem2(){
    printf("\nsou outra funcao\n");
}

void tracos(int q){                       //o int q faz com que eu possa colocar o parametro na hora de chamar a função
    int i;
    printf("\n");
    for(i=1; i<=q; i++){
        printf("-");
    }
    printf("\n");
}

int main(){
    mensagem1();
    tracos(7);
    tracos(2);
    mensagem1();
    mensagem2();
    mensagem1();
    tracos(15);
    return 0;
}