#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    const int MAXV = 1000000;
    vector<bool> present(MAXV + 1, false);
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        present[x] = true;
    }

    for (long long a = 1; a < 7000; a++) {
        if (!present[a]) {
            continue;
        }

        long long a2 = a * a;
        long long bestB = -1, bestC = -1;

        for (long long p = 1; p < a; p++) {
            if (a2 % p != 0) {
                continue;
            }
            long long q = a2 / p;
            if ((p + q) % 2 != 0) {
                continue;
            }
            long long b = (q - p) / 2;
            long long c = (q + p) / 2;
            if (b <= a || c > MAXV) {
                continue;
            }
            if (present[b] && present[c]) {
                if (bestB == -1 || b < bestB) {
                    bestB = b;
                    bestC = c;
                }
            }
        }

        if (bestB != -1) {
            cout << a << " " << bestB << " " << bestC;
            return 0;
        }
    }

    cout << -1;
}