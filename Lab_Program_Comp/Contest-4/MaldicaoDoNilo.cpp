#include<bits/stdc++.h> 

using namespace std;

string verifica_ano(string y){
    if(y[0]!=y[1] && y[0]!=y[2] && y[0]!=y[3]){ 
        if(y[1]!=y[2] && y[1]!=y[3]){
            if(y[2]!=y[3]){
                return y;
            }else{
                if(y[3]<9){
                    y[3]++;
                }else{
                    y[3]==0;
                    if(y[2]<9){
                        y[2]++;
                    }else{
                        y[2]==0;
                        if(y[1]<9){
                            y[1]++;
                        }else{
                            y[1]==0;
                            y[0]++;
                        }
                    }
                }
                return verifica_ano(y);
            }
        }
    }
}

int main() {
    string y;

    cin >> y;
    y[3]++;

    cout << verifica_ano(y);

    return 0;
}