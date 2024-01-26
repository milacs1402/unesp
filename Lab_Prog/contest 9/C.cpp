#include<bits/stdc++.h> 

using namespace std;

bool modo(pair<int,int> &a, pair<int,int> &b){
    if(a.first < b.first){
        return true;
    }
    else if(a.first==b.first){
        return a.second > b.second;
    }
    else
        return false;
}

int main() {
    vector<pair<int,int>> array;
    int tam=0, el=0;

    cin >> tam;

    for(int i=0; i<tam; i++){
        cin >> el;
        array.push_back({el, i+1});
    }

    sort(array.begin(), array.end(), modo);

    for(int i=0; i<tam; i++){
        cout << array[i].second << " ";
    }

    return 0;
}