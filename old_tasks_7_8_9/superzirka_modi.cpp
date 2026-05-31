#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k, t;
    cin >> n >> m >> k >> t;

    long long x1, y1, x2, y2;

    if (n > 0 && m > 0) {
        x1 = max(n, m) + 1;
    } else {
        x1 = 1;
    }
    y1 = 1;
    
    x2 = 1;
    if (k > 0 && t > 0) {
        y2 = max(k, t) + 1;
    } else {
        y2 = 1;
    }

    if (x1 + y1 <= x2 + y2) {
        cout << x1 << " " << y1;
    } else {
        cout << x2 << " " << y2;
    }

    return 0;
}