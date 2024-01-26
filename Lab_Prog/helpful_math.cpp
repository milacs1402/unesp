#include<bits/stdc++.h> 

using namespace std;

int main() {
    string s;
    int aux=0;

    cin >> s;

    for(int i=0; i<s.size(); i+=2){
        for(int j=i+2; j<s.size(); j+=2){
            if(s[j]<s[i]){
                aux=s[j];
                s[j]=s[i];
                s[i]=aux;
            }
        }
    }

    cout << s;
    
    return 0;
}