#include<bits/stdc++.h> 

using namespace std;

typedef long long ll;

int main() { 
    cin.tie(NULL);
    ios_base::sync_with_stdio(false);
    ll apl, apto, maxd, aux=0, novo=0;
    vector<ll> tamanho;
    vector<pair<ll,bool>> tam_desejado;
    scanf("%lld", &apl);
    scanf("%lld", &apto);
    scanf("%lld", &maxd);

    while(apl--){
        ll x;
        scanf("%lld", &x);
        tam_desejado.push_back({x,true});
    }
    while(apto--){
        ll x;
        scanf("%lld", &x);
        tamanho.push_back(x);
    }
    sort(tam_desejado.begin(), tam_desejado.end());
    sort(tamanho.begin(), tamanho.end());

    int j=0;
    for(int i=0; i<tamanho.size(); i++){
        for(j; j<tam_desejado.size(); j++){
            if(abs(tam_desejado[j].first - tamanho[i]) <= maxd && tam_desejado[j].second){
                aux++;
                tam_desejado[j].second = false;
                j++;
                break;
            }else if(tam_desejado[j].first>tamanho[i] && tam_desejado[j].second){
                break;
            }
        }
    }

    printf("%lld", aux);

    return 0;
}