#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n;
    string e;
    stack<char> p;

    cin >> n;

    while(n--){
        int aux=0;
        cin >> e;
        fflush(stdin);

        for(unsigned int i=0; i<e.size(); i++){
            if(e[i]=='<'){
                p.push('<');
            }else if(e[i]=='>'){
                if(p.empty()){
                    break;
                }
                p.pop();
                aux++;
            }
        }
        cout << aux << endl;
    }

    

    return 0;
}