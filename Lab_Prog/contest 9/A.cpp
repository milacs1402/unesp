#include<bits/stdc++.h> 

using namespace std;

int main() {
    int t=0, n=0, a=0;
    

    cin >> t;

    while(t--){
        vector<int> array;
        bool aux=true;

        cin >> n;

        for(int i=0; i<n; i++){
            cin >> a;
            array.push_back(a);

            for(int j=0; j<i; j++){
                if(a==array[j]){
                    aux=false;
                }
            }
        }

        if(!aux){
            cout << "NO" << endl;
        }
        else{
            cout << "YES" << endl;
        }
    }

    return 0;
}