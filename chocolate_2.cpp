#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, n, k;
    cin >> m >> n >> k;

    long long ant = 0;

    for (long long a = 1; a <= m; a++) {
        long long b = n;
        if (a * b < m * n && m * n - a * b >= k - 1) {
            ant = max(ant, a * b);
        }
    }

    for (long long b = 1; b <= n; b++) {
        long long a = m;

        if (a * b < m * n && m * n - a * b >= k - 1) {
            ant = max(ant, a * b);
        }
    }

    cout << ant;
    return 0;
}