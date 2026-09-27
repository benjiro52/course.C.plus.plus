#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long x = 2 * a - b;
    long long y = 2 * b - a;

    if (x < 0 || y < 0 || x % 3 != 0 || y % 3 != 0) {
        cout << -1;
    }
    else {
        cout << x / 3 << " " << y / 3;
    }

    return 0;
}