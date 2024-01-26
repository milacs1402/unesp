#include<bits/stdc++.h> 

using namespace std;

int main() {

    int pontos, dir, pp, pos=1, aux=0; //aux = qntd de vezes que ele passou no ponto principal
    cin >> pontos >> dir >> pp;

    if(pp==1){
        aux=1;
    }    
    while(dir--){
        int d;
        cin >> d;

        if(d==1){
            pos++;

            if(pos>pontos){
                pos=1;
            }
        }
        if(d==-1){
            pos--;

            if(pos==0){
                pos=pontos;
            }
        }
        if(pos==pp){
            aux++;
        }

    }

    cout << aux << endl;


    return 0;
}