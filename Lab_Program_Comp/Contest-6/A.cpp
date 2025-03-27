#include<bits/stdc++.h> 

using namespace std;

int main() {
    long long int n, aux=0;

    cin >> n;

    while(n-100>=0){
        n-=100;
        aux++;
    }
    while(n-20>=0){
        n-=20;
        aux++;
    }
    while(n-10>=0){
        n-=10;
        aux++;
    }
    while(n-5>=0){
        n-=5;
        aux++;
    }
    while(n-1>=0){
        n-=1;
        aux++;
    }

    cout << aux;

    return 0;
}