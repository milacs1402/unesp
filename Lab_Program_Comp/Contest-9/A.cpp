#include<bits/stdc++.h> 

using namespace std;

int main() {
    int nos, arestas;
    vector <vector<int>> grafo;
    cin >> nos >> arestas;

    while(arestas--){
        int n1, n2;
        vector <int> v;
        cin >> n1;
        v.push_back(n1);
        grafo[n2] = v;
    }

    for(int i=1; i<=nos; i++){
        cout << i << " - ";
        for(int j=1; j<=grafo[i].size(); j++){
            cout << grafo[i][j] << " ";
        }
    }
    
   
    return 0;
}