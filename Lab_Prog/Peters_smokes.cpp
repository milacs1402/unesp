#include<bits/stdc++.h> 

using namespace std;

int main() {

    int n, k;

    while(cin >> n >> k){
        int total=n;

        while(n-k>0){
            n-=k;
            total+=1;
            n++;
        }
        cout << total << endl;
    }

    return 0;
}