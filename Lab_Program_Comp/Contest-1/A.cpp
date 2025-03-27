#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n[8];
    char R = 'S';

    for(int i=0; i<8; i++){
        cin >> n[i];
        if(n[i]==9){
            R = 'F';
        }
    }
    cout << R << endl;
    return 0;
}