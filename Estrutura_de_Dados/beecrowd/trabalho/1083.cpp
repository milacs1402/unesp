#include <bits/stdc++.h>

using namespace std;

string final;
string str;

int operador(char ch){
    string pilha = {'^','*','/','+','-','<','>','=','#','.','|'};
    for(int i=0; i<pilha.length(); i++)
        if(ch == pilha[i]) return 1;
    return 0;
}

int prioridade(char ch){
    if(ch == '^') return 6;
    if(ch == '*' || ch == '/') return 5;
    if(ch == '+' || ch == '-') return 4;
    if(ch == '>' || ch == '<' || ch == '=' || ch == '#') return 3;
    if(ch == '.') return 2;
    if(ch == '|') return 1;
    return 0;
}

int main(){
    int cnt;
    bool ando, dor, lex, syn;
    while(cin >> str){
        ando = dor = lex = syn = 0;
        cnt = 0;
        final.clear();
        stack<char> pilha;
        for(int i = 0; i<str.length();i++){
            if(!isalpha(str[i]) && !operador(str[i]) && !isdigit(str[i]) && str[i]!= '(' && str[i] != ')'){
                lex = 1;
                break;
            }
            else if(str[i] == '(') cnt++;
            else if(str[i] == ')') cnt--;
            else if((isalpha(str[i]) || isdigit(str[i])) && !ando){
                ando = 1;
                dor = 0;
            }
            else if(operador(str[i]) && !dor){
                dor = 1;
                ando = 0;
            }
            else{
                syn = 1;
                break;
            }
        }
        if(lex){
            cout << "Lexical Error!\n";
            continue;
        }
        if(syn || cnt){
            cout << "Syntax Error!\n";
            continue;
        }
        for(int i=0; i<str.length(); i++){
            if(isalpha(str[i]) || isdigit(str[i])) final += str[i];
            else if(str[i] == '(') pilha.push(str[i]);
            else if(str[i] == ')'){
                while(!pilha.empty() && pilha.top()!='('){
                    final += pilha.top();
                    pilha.pop();
 
                }
                if(!pilha.empty()){
                
                    pilha.pop();
                }
            }
            else{
                while(!pilha.empty() && prioridade(str[i]) <= prioridade(pilha.top())){
                    final += pilha.top();
                    pilha.pop();
                }
                pilha.push(str[i]);
            }
        }
        while(!pilha.empty()){
            final += pilha.top();
            pilha.pop();
        }
        cout << final << '\n';
    }
}