#include<bits/stdc++.h> 

using namespace std;

int verifica_ano(string num, int y){
    num = to_string(y);
    if(num[0]!=num[1] && num[0]!=num[2] && num[0]!=num[3] && num[1]!=num[2] && num[1]!=num[3] && num[2]!=num[3]){ 
    return y;
    }else{
        y++;
        return verifica_ano(num, y);
    }
}

int main() {
    int y;
    string num;

    cin >> y;
    y++;

    cout << verifica_ano(num, y);

    return 0;
}