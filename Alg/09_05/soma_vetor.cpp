#include<bits/stdc++.h> 

using namespace std;

int soma_vet(int n, int vet[100000]){

    if(n==0){
        return 0;
    }
    else{
        return vet[n-1] + soma_vet(n-1, vet); 
    }
   
}

int main() {

    int n;

    cin >> n;

    int vet[100000];

    for(int i=0; i<n; i++){
        cin >> vet[i];
    }

    cout << soma_vet(n, vet) << endl;


    return 0;
}