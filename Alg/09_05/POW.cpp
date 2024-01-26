#include<bits/stdc++.h> 

using namespace std;

float pot( float x, int y ){

    if(y==0){
        return 1;
    }
    else{
        return x*pot(x, y-1);
    }

}

int main() {
    int y;
    float x;

    cin >> x >> y;
    cout << pot(x,y);

    return 0;
}