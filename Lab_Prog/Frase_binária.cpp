#include<bits/stdc++.h> 

using namespace std;

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

void tradutor(int letra){
    char dec;

    dec=bintodec(letra);

    cout << dec;
}

int main() {
    int n;

    while(cin >> n){

        while(n--){
            int letra;

            cin >> letra;
            tradutor(letra);
            
        }

        cout << endl;
    }

    return 0;
}