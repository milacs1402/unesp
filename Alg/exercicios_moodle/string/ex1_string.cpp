#include<bits/stdc++.h> 

using namespace std;

int main() {

    string word;

    cin >> word;

    for(int i=0; i<word.size(); i++){

        word[i]+=32;

    }

    cout << word << endl;

    return 0;
}