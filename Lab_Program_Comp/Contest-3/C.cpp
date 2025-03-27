#include<bits/stdc++.h> 

using namespace std;
//USAR MAP N SET
int main() {
    int qntd,queries;
    set<int>bin;

    cin >> qntd;
    cin >> queries;

    while(qntd--){
        int x;
        cin >> x;
        bin.insert(x);
    }

    while(queries--){
        int num;
        cin >> num;
        auto pont = bin.find(num);

        if(pont == bin.end()){
            cout << "-1";
        }

    }


    return 0;
}