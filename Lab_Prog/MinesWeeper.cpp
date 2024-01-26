#include<bits/stdc++.h> 

using namespace std;

int main() {
    int m, n, aux=0;

    cin >> m;
    cin >> n;

    while(m!=0 && n!=0){
        int mat[m][n];
        char imput;
        
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                cin >> imput;
                if(imput=='.'){
                    mat[i][j]=0;
                }
                else
                    mat[i][j]=-1;
            }
        }

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j] == -1){
                    int top = false, bottom = false;
                    if(i-1 >= 0){
                        if(mat[i-1][j] != -1){
                            mat[i-1][j]++;
                        }
                        bottom = true;
                    }
                    if(i+1 < m){
                        if(mat[i+1][j] != -1){
                            mat[i+1][j]++;
                        }
                        top = true;
                    }
                    if(j-1 >= 0){
                        if(mat[i][j-1] != -1){
                            mat[i][j-1]++;
                        }
                        if(bottom){
                            if(mat[i-1][j-1] != -1){
                                mat[i-1][j-1]++;
                            }
                        }
                        if(top){
                            if(mat[i+1][j-1] != -1){
                                mat[i+1][j-1]++;
                            }
                        }
                    }
                    if(j+1 < n){
                        if(mat[i][j+1] != -1){
                            mat[i][j+1]++;
                        }
                        if(bottom){
                            if(mat[i-1][j+1] != -1){
                                mat[i-1][j+1]++;
                            }
                        }
                        if(top){
                            if(mat[i+1][j+1] != -1){
                                mat[i+1][j+1]++;
                            }
                        }
                    }                    
                }
            }
        }

        
        aux++;

        cout << "Field #" << aux << ":" << endl;

        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(mat[i][j]==-1){
                    cout << '*';
                }
                else
                    cout << mat[i][j];
            }
            cout << endl;
        }

        cin >> m;
        cin >> n;

        if(n!=0 && m!=0){
            cout << endl;
        }
    }

    return 0;
}