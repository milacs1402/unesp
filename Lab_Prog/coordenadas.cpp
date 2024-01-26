#include<bits/stdc++.h> 

using namespace std;

int main() {
    float x, y;

    cin >> x;
    cin >> y;

    if(x>0){
        if(y>0){
            cout << "Q1" << endl;
        }
        if(y<0){
            cout << "Q4" << endl;
        }
        if(y==0){
            cout << "Eixo X" << endl;
        }
    }
    else if(x<0){
        if(y>0){
            cout << "Q2" << endl;
        }
        if(y<0){
            cout << "Q3" << endl;
        }
        if(y==0){
            cout << "Eixo X" << endl;
        }
    }
    else if(x==0){
        if(y==0){
            cout << "Origem" << endl;
        }
        if(y!=0){
            cout << "Eixo Y" << endl;
        }
    }
    

    return 0;
}