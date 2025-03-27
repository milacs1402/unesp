#include<bits/stdc++.h> 

using namespace std;

void coolTree(string pre, string in, int beg, int end, int *i){
    int mid;
    char aux = pre[*i];
    mid = in.find(pre[*i]);
    (*i)++;
    if(mid - beg){
        coolTree(pre, in, beg, mid-1, i);
    }
    if(end - mid){
        coolTree(pre, in, mid+1, end, i);
    }
    cout << aux;
}
int main() {
    int t;
    cin >> t;

    while(t--){
        int n, beg=0, i=0;
        string pre, in;

        cin >> n;
        cin >> pre;
        cin >> in;

        int end=n-1;

        coolTree(pre, in, beg, end, &i);
        cout << "\n";
    }
    return 0;
}