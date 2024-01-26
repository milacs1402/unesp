#include<bits/stdc++.h> 

using namespace std;

int main() {

    string zeros;

    cin >> zeros;

    for(int i=0; i<zeros.size(); i++){
        if(zeros[i]=='0'){
            zeros[i]='1';
        }
    }

    cout << zeros;
    return 0;
}