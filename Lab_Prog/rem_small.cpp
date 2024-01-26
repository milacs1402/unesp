#include<bits/stdc++.h> 

using namespace std;

int comp(int a, int b, int vet[]){
    int count=a-1;
    if(vet[a]-vet[b]<=1){
        count--;
    }
    if(count!=0){
        return comp(a, b-1, vet);
    }
    else
        return count;
}

int main() {

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        int vet[n], aux=0, count=n-1;

        for(int i=0; i<n; i++){
        cin >> vet[i];
        }

        if(n==1){
            cout << "YES";
        }

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(vet[j]<vet[i]){
                    aux=vet[j];
                    vet[j]=vet[i];
                    vet[i]=aux;
                }
            }
        }

        if(comp(n, n-1, vet)!=0){
            cout << "NO";
        }
        else
        cout << "YES";
        
    }

    return 0;
}