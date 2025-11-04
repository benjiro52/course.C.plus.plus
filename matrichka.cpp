#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;

    int need = n + m - 1;

    if (k >= need && k <= n * m) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}