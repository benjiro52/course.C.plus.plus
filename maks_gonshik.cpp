#include <bits/stdc++.h>
using namespace std;

int main() {
    long long p, u, t;
    cin >> p >> u >> t;

    long long base;
    if (t <= u) {
        base = t * (t + 1) / 2;
    } else {
        base = u * (u + 1) / 2 + (t - u) * u;
    }

    long long extraMax = 0;
    if (t > u) {
        long long k = t - u;
        extraMax = k * (k + 1) / 2;
    }

    long long extra = min(p, extraMax);
    cout << base + extra;
}