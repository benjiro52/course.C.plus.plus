#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    int n, m;
    cin >> n >> m;
    

    for (int i = 0; i < m; i++) {
        int player;
        cin >> player;
        winner[ant]++;
        if (ant == -1 || winner[player] > winner[ant]) {
            ant = player;
        }
    }

    cout << ant;

    return 0;
}