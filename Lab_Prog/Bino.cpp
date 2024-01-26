#include<bits/stdc++.h> 

using namespace std;

int Mde2(int num, int aux){ 

    if(num%2==0){
        aux++;
    }
    return aux;
}

int Mde3(int num, int aux){ 

    if(num%3==0){
        aux++;
    }
    return aux;
}

int Mde4(int num,int aux){ 

    if(num%4==0){
        aux++;
    }
    return aux;
}

int Mde5(int num, int aux){ 

    if(num%5==0){
        aux++;
    }
    return aux;
}

int main() {
    int n, num, aux2=0, aux3=0, aux4=0, aux5=0;

    cin >> n;
    while(n--){
        cin >> num;

        aux2=Mde2(num, aux2);
        aux3=Mde3(num, aux3);
        aux4=Mde4(num, aux4);
        aux5=Mde5(num, aux5);
    }

    cout << aux2 << " Multiplo(s) de 2" << endl;
    cout << aux3 << " Multiplo(s) de 3" << endl;
    cout << aux4 << " Multiplo(s) de 4" << endl;
    cout << aux5 << " Multiplo(s) de 5" << endl;

    return 0;
}