#include<bits/stdc++.h> 

using namespace std;

int main() {

    int n, t, d;
    float v, rec=0;

    while(scanf("%d", &n)!=EOF){ 
        for(int i=1; i<=n; i++){

            cin>>t>>d;
            v=(float)d/t;

            if(v>rec){
                cout<<i<<endl;
                rec=v;
            }
        }
        rec=0;
    }
    return 0;
}