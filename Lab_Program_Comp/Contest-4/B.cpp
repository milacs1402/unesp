#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> v;
    int t, size, dir, esq, resp;
    cin >> t;
    while(t--){
        cin >> size;
        v.resize(size);
        dir = esq = 1;
        for(int i=0;i<size;i++){
            cin >> v[i];
        }
        for(int i=1,j=size-2;;){
            if(v[i] == v[i-1]){
                esq++;
                i++;
            }
            if(v[j] == v[j+1]){
                dir++;
                j--;
            }
            if((v[i] != v[i-1]) && (v[j] != v[j+1]))
                break;
        }
        if(esq >= dir){
            if(v[0] == v[size-1])
                esq+=dir;
            resp = size - esq;
        }
        else{
            if(v[0] == v[size-1])
            dir+=esq;
            resp = size - dir;
        }
        if(resp<0)
            cout << "0\n";
        else
            cout << resp << "\n";
    }
}