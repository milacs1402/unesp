#include<bits/stdc++.h> 

using namespace std;

int main() {
    int n, count=0, repet=1, hmax=0;
    vector<int>l;

    cin >> n;
    
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        l.push_back(x);
    }
    sort(l.begin(), l.end());

    for(int i=0; i<n; i++){

        if(l[i]!=l[i+1]){
            count++;
            repet=1;
        }else{
            repet++;
        }
        if(repet>hmax){
            hmax=repet;
        }
    }
    cout << hmax << " " << count << endl;
    return 0;
}