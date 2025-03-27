#include<bits/stdc++.h> 

using namespace std;

int main() {
    int caixas, clientes, tempo=0;
    queue<int>itens;
    queue<int>velocidade;

    cin >> caixas;
    cin >> clientes;
    int teste = caixas;

    while(caixas--){
        int v;
        cin >> v;
        velocidade.push(v);
    }

    while(clientes--){
        int c;
        cin >> c;
        itens.push(c);
    }

    if(teste==1){
        while(!itens.empty()){
            tempo+=velocidade.front()*itens.front();
            itens.pop();
        }
        cout << tempo << "\n";
    }else{
        cout << tempo << "\n"; 
    }
    return 0;
}