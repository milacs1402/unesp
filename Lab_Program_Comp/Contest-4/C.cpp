#include <iostream>
using namespace std;

int torre_hanoi(int n, int origem, int destino, int aux) {
    if (n == 1) {
        cout << origem << " " << destino << endl;
        return 1;
    } else {
        int moves = 0;
        moves += torre_hanoi(n - 1, origem, aux, destino);
        cout << origem << " " << destino << endl;
        moves += 1;
        moves += torre_hanoi(n - 1, aux, destino, origem);
        return moves;
    }
}

int main() {
    int n;
    cin >> n;
    cout << (1 << n) - 1 << endl; 
    torre_hanoi(n, 1, 3, 2); 
    return 0;
}
