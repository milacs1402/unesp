#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int pedras;
    cin >> pedras;

    vector <int> alt(pedras + 1, 0);
    for(int i = 1; i <= pedras; i++)
        cin >> alt[i];

    vector <int> custo_min(pedras + 1);
    custo_min[2] = abs(alt[2] - alt[1]);
    for(int i = 3; i <= pedras; i++)
        custo_min[i] = min(custo_min[i - 1] + abs(alt[i] - alt[i - 1]),
                              custo_min[i - 2] + abs(alt[i] - alt[i - 2]));

    cout << custo_min[pedras];
    return 0;
}