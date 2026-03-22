#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<long long> a(n + 1);
    vector<long long> prefix(n + 1, 0);
    vector<long long> prefix2(n + 1, 0);

    for (int i = 1; i <= n; i++) {
        cin >> a[i];
        prefix[i] = prefix[i - 1] + a[i];

        int s = 0;
        int x = a[i];
        while (x > 0) {
            s += x % 10;
            x /= 10;
        }
        prefix2[i] = prefix2[i - 1] + s;
    }

    long long ant = 0;
    long long total = 0;

    for (int q = 0; q < k; q++) {
        int i1, i2;
        cin >> i1 >> i2;
        ant += prefix[i2] - prefix[i1 - 1];
        total += prefix2[i2] - prefix2[i1 - 1];
    }

    cout << ant << endl;
    cout << total;

    return 0;
}