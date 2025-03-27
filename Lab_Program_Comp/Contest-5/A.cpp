#include<bits/stdc++.h> 

using namespace std;

int main() {
    int t, n;
    
    cin >> t;

    while(t--){
        cin >> n;
        int soma=0;
        vector<int> array;

        while(n--){
            int x;
            cin >> x;
            array.push_back(x);
        }
        int size=array.size()-1;
        sort(array.begin(), array.end());

        for(int i=size; i>=1; i--){
            soma+=array[i] - array[i-1];
        }

        cout << soma << endl;
    }
    return 0;
}