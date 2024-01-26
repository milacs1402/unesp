#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n;
    double alg, letras;

    cin >> n;

    while(n--){
        double POW=0;

        cin >> letras;
        cin >> alg;
        if(letras==0 && alg==0) 
            cout << "0";
        else{
            POW = pow(26,letras)*pow(10,alg);
            cout << (int)(POW);
        }
        cout << endl;
    }

    return 0;
} 