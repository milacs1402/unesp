//Camila Cristina Silva
//Windows
//CLion - JetBrains

#include "Procedimentos/proximo.cpp";
#include "Procedimentos/erros.cpp";
#include "Procedimentos/codigo.cpp";
#include<bits/stdc++.h>

using namespace std;

int s, i, j = 0;

int AnaLex() {
    vector<char> atomo = {};

    while (prox == " ")
        proximo();

    if (prox == 46 || prox == 59 || prox == 44 || prox == 40 || prox == 41 || prox == 58 || prox == 61 || prox == 60 || prox == 62 || prox == 43 || prox == 45 || prox == 42)
    {
        s = prox;
        proximo();

        if (s == 58)
        {
            if (prox == 61)
            {
                s = 5861;
            }
        }

        simbolo = codigo(s);

    }else if (97 < prox < 122)
    {
        do
        {

            atomo = atomo + prox;
            proximo();

        }while (48 < prox < 57 || 97 < prox < 122);

        if (atomo /*pertencer a palavras reservada*/)
        {
            simbolo = codigo(atomo);
        }else
        {
            simbolo = "ident_" + i;
            i++;
        }

    }else if (48 < prox < 57)
    {
        do
        {
            atomo = atomo + prox;
            proximo();

        }while (48 < prox < 57);

        if (97 < prox < 122)
        {
            erros();
        }

        simbolo = "num_" + j;
        j++;

    }else
        erros();
    return 0;
}