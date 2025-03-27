#include <bits/stdc++.h>

using namespace std;
int lin, col;
vector<vector<char>> pl;
vector<vector<bool>> check;
queue<pair<int,int>> fila;

int main(){
    int count = 0, l, c;
    cin >> lin >> col;
    pair<int,int> aux;
    pl.resize(lin,vector<char>(col));
    check.resize(lin,vector<bool>(col,false));
    for(int i = 0 ; i < lin ; i++)
        for(int j = 0 ; j < col ; j++)
            cin >> pl[i][j];
    for(int i = 0 ; i < lin ; i++){
        for(int j = 0 ; j < col; j++){
            if(pl[i][j] == '.' && !check[i][j]){
                count++;
                fila.push({i,j});
            }
            while(!fila.empty()){
                aux = fila.front();
                fila.pop();
                l = aux.first;
                c = aux.second;
                //cout << l << " " << c << '\n';
                if(l+1 < lin && !check[l+1][c] && pl[l+1][c] == '.'){
                    check[l+1][c] = true;
                    fila.push({l+1,c});
                }
                if(l-1 >= 0 && !check[l-1][c] && pl[l-1][c] == '.'){
                    check[l-1][c] = true;
                    fila.push({l-1,c});
                }
                if(c+1 < col && !check[l][c+1] && pl[l][c+1] == '.'){
                    check[l][c+1] = true;
                    fila.push({l,c+1});
                }
                if(c-1 >= 0 && !check[l][c-1] && pl[l][c-1] == '.'){
                    check[l][c-1] = true;
                    fila.push({l,c-1});
                }
            }
        }
    }
    cout << count << '\n';
}