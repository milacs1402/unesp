#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n, aux=0;
    vector<int>a;
    cin >> n;

    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        a.push_back(x);
    }

    sort(a.begin(), a.end());
    
    int i=0;
    while(i!=n){
        aux+= a[i+1] - a[i];
        i+=2;
    }

    cout << aux << endl;
    return 0;
}