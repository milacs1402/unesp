#include<bits/stdc++.h> 

using namespace std;

long int dmc(long long int n){
    long double rest=0;
    string num;
    long long int aux=0, quo=0;

    quo=n/2050;
    rest=n%2050;
    num=to_string(quo); 

    if(rest==0){
        
        for(unsigned int i=0; i < num.size(); i++){
            aux+=num[i]-'0';
        }

        return aux;
    }
    else
        return -1;
}


int main() {

    int t;
    cin >> t;
    while(t--){
        long long int n;
        cin >> n;

 
        cout << dmc(n) << endl;

    }

    return 0;
}