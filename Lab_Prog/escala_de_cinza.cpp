#include<bits/stdc++.h>

using namespace std;



int eye(int red, int green, int blue){
    double P;
    P = 0.30*red + 0.59*green + 0.11*blue;

    return P;
}

int mean(int red, int green, int blue){
    double M;
    M = (red + green + blue)/3;

    return M;
}

int max(int red, int green, int blue){
    
    if(red>=green && red>=blue){
    return red;
    }
    else if(green>=red && green>=blue){
    return green;
    }
    else if(blue>=green && blue>=red){
    return blue;
    }
}
int min(int red, int green, int blue){
    
    if(red<=green && red<=blue){
    return red;
    }
    else if(green<=red && green<=blue){
    return green;
    }
    else if(blue<=green && blue<=red){
    return blue;
    }
}


int main() {

    int red, green, blue, n;
    string resp;

    while(scanf("%d", &n)!=EOF){ 
        for(int i=1; i<=n; i++){
            cin >> resp;
            cin >> red >> green >> blue;
            
            if(resp=="eye"){
                printf("Caso #%d: %d\n",i, eye(red,green,blue));
            }
            
            if(resp=="mean"){
                printf("Caso #%d: %d\n",i, mean(red,green,blue));
            }
            if(resp=="max"){
                printf("Caso #%d: %d\n",i, max(red,green,blue));
            }
            if(resp=="min"){
                printf("Caso #%d: %d\n",i, min(red,green,blue));
            }

        }
    }

    return 0;
}