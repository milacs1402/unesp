#include<bits/stdc++.h> 

using namespace std;

int main() {
    int teste=0;

    cin >> teste;

    while(teste--){
        int n=0, k=0, h=0;
        long long int dif=999999999; 
        vector<int> altura;

        cin >> n;
        cin >> k;


        for(int i=0; i<n; i++){
            cin >> h;
            altura.push_back(h);
        }

        if(k==1){
            cout << "0" << endl;
        }
        else{


            sort(altura.begin(), altura.end());

            for(int i=n-1; i>=k-1; i--){
                if(altura[i]-altura[i-k+1]<dif){
                    dif=altura[i]-altura[i-k+1];
                }
            }

            cout << dif << endl;

        }
    }

    return 0;
}