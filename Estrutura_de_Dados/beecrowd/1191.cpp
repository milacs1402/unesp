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

    string pre, in;
    while(cin >> pre){
        int beg=0, i=0;

        cin >> in; 

        int end=pre.size()-1;

        coolTree(pre, in, beg, end, &i);
        cout << "\n";
    }
    return 0;
}