#include<bits/stdc++.h> 

using namespace std;

void shell_sort(int n, vector<int> &v) {
    int gap = 2, aux = 0;

    while (gap > 0) {
        for (int i = 0; i < n; i++) {
            for (int j = i + gap; j < n; j += gap) {
                if (v[i] > v[j]) {
                    aux = v[j];
                    v[j] = v[i];
                    v[i] = aux;
                }
            }
        }
        gap--;
    }
}

int main() {
    int num = 0, len = 0;
    vector<int> qntd;
    vector<int> tower;
    int auxx = 0, start = 0;

    cin >> num;

    for (int i = 0; i < num; i++) {
        cin >> len;
        tower.push_back(len);
    }

    shell_sort(num, tower);


    int aux = 1;
    for (int i = start; i < num; i++) {
        if (tower[i] == tower[i + 1]) {
            aux++;
        }
        else {
            qntd.push_back(aux);
            auxx++;
            start = i + 1;
            aux = 1;
        }
    }

    shell_sort(auxx, qntd);

    cout << qntd[auxx - 1] << " " << auxx << " ";
            
    return 0;
}
