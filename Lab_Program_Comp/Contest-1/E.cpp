#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n;

    cin >> n;
    if(n==1){
        cout << 1 << endl;
    }
    else if(n<=3){
        cout << "NO SOLUTION" << endl;
    }
    else{     
        int m;
        m=n;
        while(m-2>0){
            cout << m-2;
            m=m-2;
        }
        m=n-1;
        while(m-2>0){
            cout << m-2;
            m=m-2;
        }
    }
    return 0;
}