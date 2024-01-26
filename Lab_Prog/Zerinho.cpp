#include<bits/stdc++.h> 

using namespace std;

int main() {

    int a, b, c;

    while(scanf("%d %d %d", &a, &b, &c)!=EOF){
        if(a+b+c==0 || a+b+c==3){
            cout << "*" << endl;
        }
        else if(a!=b && a!=c){
            cout << "A" << endl;
        }
        else if(b!=a && b!=c){
            cout << "B" << endl;
        }
        else if(c!=b && c!=a){
            cout << "C" << endl;
        }
    }

    return 0;
}