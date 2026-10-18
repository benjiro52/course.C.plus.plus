#include <bits/stdc++.h>
using namespace std;

int main() {
    long long d, l, r;
    cin >> d >> l >> r;

    long long count = 0;
    for (long long a = 1; a * a < d; a++) {
        if (d % a != 0) {
            continue;
        }
        long long b = d / a;
        if ((a + b) % 2 != 0) {
            continue; 
        }
        long long x = (a + b) / 2;
        long long y = (b - a) / 2;
        if (y * y >= l && x * x <= r) {
            count++;
        }
    }

    cout << count;
}