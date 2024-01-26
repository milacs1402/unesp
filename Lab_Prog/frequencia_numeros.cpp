#include<bits/stdc++.h> 

using namespace std;

int main() {
    int testes, count=0, j;

    cin >> testes;
    
    int num[testes];

     for(int i=0; i<testes; i++){
        cin >> num[i];
    }

    for(int i=1; i<=2000; i++){
        for(j=0; j<testes; j++){

            if(num[j] == i){
                count++;
            }

        }
        if(count==0){
            continue;
        }
        printf("%d aparece %d vez (es)\n", i, count);
        count=0;
    } 
    
    return 0;
}


