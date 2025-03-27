#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n;

    cin >> n;


    while(n){
        queue<int>cards;
        int first=1;

        for(int i=1; i<=n; i++){
            cards.push(i);
        }

        cout << "Discarded cards:";

        while(cards.size()!=1){
            if(first){
                cout << " " << cards.front();
                first=0;
            }else{
                cout << ", " << cards.front();
            }
            cards.pop();
            cards.push(cards.front());
            cards.pop();
        }

        cout << "\n" << "Remaining card: " << cards.front() << "\n";
        
        cin >> n;
    }
    return 0;
}