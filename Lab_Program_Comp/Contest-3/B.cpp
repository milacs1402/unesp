#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n,k,tempo=240;
    cin >> n;
    cin >> k;

    tempo=tempo-k;

    int ex=0, aux=0;
    for(unsigned i=1; i<=n; i++){
        ex+=5*i;
        if(ex>tempo){
            cout << i-1;
            aux++;
            break;
        }
    }
    if(!aux){
        cout << n;
    }
    return 0;
}