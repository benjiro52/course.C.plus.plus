#include <bits/stdc++.h>
using namespace std;

int main() {
    for (int i = 0; i < 3; i++) {
        long long n, m;
        cin >> n >> m;

        if (n >= m) {
            cout << 0 << endl;
            continue;
        }
        
        long long ant = 1;
        for (long long j = 2; j <= n; j++) {
            ant = (ant * j) % m;
        }

        cout << ant << endl;
    }

    return 0;
}