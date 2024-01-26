#include<bits/stdc++.h> 

using namespace std;

int main() {
    vector<int> distD;
    int atac, def, distA[11], atacanteP;

    cin >> atac;
    cin >> def;

    while(atac!=0 && def!=0){
        for(int i=0; i<atac; i++){
            int aux=10001;
            cin >> distA[i];

            if(distA[i]<aux){
                aux=distA[i]; 
                atacanteP=aux;
            }
        }

        for(int i=0; i<def; i++){
            int aux;
            cin >> aux;
            distD.push_back(aux);
        }
        
        sort(distD.begin(), distD.end());   
        
        if(distD[1] > atacanteP){
            cout << "Y" << endl;
        }
        else{
            cout << "N" << endl;
        }

        cin >> atac;
        cin >> def;
    }

    

    return 0;
}