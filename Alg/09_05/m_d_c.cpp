#include<bits/stdc++.h> 

using namespace std;

int mdc(int num1, int num2){
    int aux;

    if(num1 % num2==0){

        return num2;

    }
    else{
        aux = mdc(num2, num1%num2);
        return aux;
    }
}

int main() {
    int num1, num2;
     
    cin >> num1;
    cin >> num2;

    cout << "\n\nO MDC entre " << num1 << " e " << num2 << " eh " << mdc(num1, num2) << endl;

    return 0;
}