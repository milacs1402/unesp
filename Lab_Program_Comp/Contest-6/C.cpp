#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n, cases;

    cin >> n;

    int vet[n];

    for(int i=0; i<n; i++){
        cin >> vet[i];
    }

    cin >> cases;

    while(cases--){
        int i, j;
        int soma=0;
        cin >> i;
        cin >> j;

        for(int a=i; a<=j; a++){
            soma+=vet[a];
        }

        cout << soma << endl;
        soma=0;
    }
    return 0;
}