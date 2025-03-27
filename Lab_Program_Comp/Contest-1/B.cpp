#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n, h, hmin, resp=0;

    cin >> n;
    cin >> h;
    
    resp = n;

    while(n--){
        cin >> hmin;
        if(hmin>h){
            resp--;
        }
    }

    cout << resp << endl;

    return 0;
}