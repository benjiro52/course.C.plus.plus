#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, n;
    cin >> a >> b >> c >> n;

    long long k_max = (n + a + b + c) / 2;

    if (k_max % 2 != 0) {
        k_max--;
    }

    long long k_min = max({a, 2 * b, 2 * c});

    if (k_min % 2 != 0) {
        k_min++;
    }

    if (k_max < k_min) {
        cout << 0;
        return 0;
    }

    long long k = k_max;
    long long x = k - a;
    long long y = k / 2 - b;
    long long z = k / 2 - c;

    cout << x << endl << y << endl << z;
    return 0;
}