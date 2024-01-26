#include<bits/stdc++.h> 

using namespace std;



int main() {

    int n, x, d, Sjoao=0, Smaria=0;
    cin >> n;
    while(n--){ 
        for(int i=1; i<=3; i++){
            
            cin >> x >> d;
            Sjoao+=x*d;
        }

        for(int i=1; i<=3; i++){
            
            cin >> x >> d;
            Smaria+=x*d; 
        }

        if(Sjoao>Smaria){
            cout << "JOAO" << endl;
        }
        else{
            cout << "MARIA" << endl;
        }

        Sjoao=0;
        Smaria=0;
    }
    return 0;
}