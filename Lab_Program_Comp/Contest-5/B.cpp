#include<bits/stdc++.h> 

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--){
        long long int tipo1, tipo2, total=0;
        long long int litros, n1=0, n2=0;
        cout << "Quantidade de litros necessaria: ";
        cin >> litros;
        cout << endl;
        cout << "Valor da garrafa de 1 litro: ";
        cin >> tipo1;
        cout << endl;
        cout << "Valor da garrafa de 2 litros: ";
        cin >> tipo2;

        if(2*tipo1<tipo2){
            total = litros*tipo1;
            n1 = total/tipo1;
        }else if(litros == 1){
                total = tipo1;
                n1 = total/tipo1;
        }else{
            if(!(litros%2)){
                total = (litros/2)*tipo2;
                n2 = total/tipo2;
            }else{
                total = ((litros - 1)*tipo2)/2 + tipo1;
                n1 = (total - ((litros - 1)*tipo2)/2)/tipo1;
                n2 = (total - tipo1)/tipo2;
            }
        }
        cout << endl;
        cout << "Dinheiro necessario : " << total << " reais"<< endl;
        cout << n1 << " garrafa(s) de 1 litro e " << n2 << " garrafa(s) de 2 litros" << endl;
        cout << endl;
        total = 0;
        n1 = 0;
        n2 = 0;
    }

    return 0;
}