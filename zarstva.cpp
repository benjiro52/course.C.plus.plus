#include <bits/stdc++.h>
using namespace std;

bool is_prime(long long x) {
    if (x < 2) return false;
    for (long long i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}
    
int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long ant = 0;

    for (long long k = c; k <= d; k++) {
        long long min_n;
        if (k == 1) {
            continue;
        } else if (is_prime(k)) {
            min_n = 1;
        } else if (k % 2 == 0) {
            min_n = 2;
        } else if (is_prime(k - 2)) {
            min_n = 2;
        } else {
            min_n = 3;
        }

        if (min_n <= b) {
            long long j = max(a, min_n);
            ant += b - j + 1;
        }
    }

    cout << ant;
    return 0;
}
