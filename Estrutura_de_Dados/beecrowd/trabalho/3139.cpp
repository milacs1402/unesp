#include<bits/stdc++.h> 

using namespace std;

int main() {    
    int now, meta, soma=0, media=0, aux=0;
    queue<int> dia;

    cin >> now;
    cin >> meta;

    for(int i=0; i<30; i++){
        int x;
        cin >> x;
        dia.push(x);
        soma+=x;
    }

    media=ceil(soma/30.0);

    while(now<meta){
        now+=media;
        soma-=dia.front();
        dia.pop();
        dia.push(media);
        aux++;
        soma+=media;
        media=ceil(soma/30.0);
    }

    cout << aux;

    return 0;
}