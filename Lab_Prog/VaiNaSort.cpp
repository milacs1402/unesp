#include<bits/stdc++.h> 

using namespace std;

int main() {

    while(1){
        int n, aux=0;
        cin >> n;
        if(n==0){
            break;
        }

        while(1){
            bool ordem=true;
            for(int j=1; j<=n; j++){
                int pedra;

                cin >> pedra;

                if(pedra!=j){
                    ordem=false;
                }
            }
            aux++;
            if(ordem){
                break;
            }
        }
        cout << aux << endl;
    }
    return 0;
}