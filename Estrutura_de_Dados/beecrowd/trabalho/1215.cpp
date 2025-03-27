#include<bits/stdc++.h> 


using namespace std;

int main() {
    string pal, aux;
    char c;
    set<string> dic;

    while(cin >> pal){

        for(int i=0; i<=pal.size(); i++){

            if(isalpha(pal[i])){
                c = tolower(pal[i]);
                aux+= c;
            }else{

                if(aux.empty()){
					continue;
				}else{
					dic.insert(aux);
					aux.clear();
				};
            }

        }


    }
    for(auto& resp: dic){
        cout << resp << "\n";
        }
    return 0;
}