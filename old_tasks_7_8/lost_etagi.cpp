#include <bits/stdc++.h>
using namespace std;

int main() {
    int m;
    cin >> m;

    vector<long long> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    long long n = a[0]; 
    cout << n << endl;

    for (int k = m - 1; k >= 0; k--) {
        long long b;
        if (k == m - 1)
            b = a[k];
        else
            b = a[k] - a[k + 1];

        while (b--) {
            cout << k + 1 << " ";
        }
    }
}
