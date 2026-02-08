#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, p;
    cin >> m >> p;

    long long period1 = 2 * m;
    long long period2 = 2 * p;

    for (long long i = 0; i < period2; i++) {
        long long t = m + i * period1;
        if ((t - p) % period2 == 0) {
            cout << t;
            return 0;
        }
    }

    cout << -1;
    return 0;
}