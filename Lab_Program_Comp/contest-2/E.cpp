#include<bits/stdc++.h> 

using namespace std;

int main() {
    int t;

    cin >> t;

    while(t--){
        int n,z,total=0,aux=0;
        priority_queue<int>soldiers;

        cin >> n;
        cin >> z;

        while(n--){
            int x;
            cin >> x;
            soldiers.push(x);
        }
        while(z>0 && !soldiers.empty()){
            z=z-soldiers.top();
            if(soldiers.top()/2 != 0){
                soldiers.push(soldiers.top()/2);
            }
            soldiers.pop();
            aux++;
        }

        if(z>0){
            cout << "Evacuate" << endl;
        }else{
            cout << aux << endl;
        }
        soldiers = priority_queue<int>();
    }
    return 0;
}