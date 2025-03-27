#include <bits/stdc++.h>

using namespace std;

int melhor_caminho(int n, int k, vector<int>& altura) {
    vector<int> custo_min(n, INT_MAX);
    custo_min[0] = 0;

    for (int i = 0; i < n; i++) {
        
        for (int j = 1; j <= k && i + j < n; j++) {
            int custo = abs(altura[i] - altura[i + j]);

            custo_min[i + j] = min(custo_min[i + j], custo_min[i] + custo);
        }
    }
    return custo_min[n - 1];
}

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> altura(n);
    for (int i = 0; i < n; i++) {
        cin >> altura[i];
    }

    cout << melhor_caminho(n, k, altura);

    return 0;
}
