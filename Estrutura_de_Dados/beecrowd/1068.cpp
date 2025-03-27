#include<bits/stdc++.h> 

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string e;

    while(cin >> e){
        stack<char> p;
        int aux=0;

        for(unsigned int i=0; i<e.size(); i++){
            if(e[i]=='('){
                p.push('(');
            }else if(e[i]==')'){
                if(p.empty()){
                    cout << "incorrect" << endl;
                    aux++;
                    break;
                }
                p.pop();
            }
        }
        if(!aux){
            if(p.empty()){
                cout << "correct" << endl;
            }else{
                cout << "incorrect" << endl;
            }
        }
    }

    return 0;
}