#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    n = n % 60;

    long long a = 1, b = 1;
    if (n == 0) {
        cout << 1;
        return 0;
    }

    for (long long i = 2; i <= n; i++) {
        long long c = (a + b) % 10;
        a = b;
        b = c;
    }

    cout << b;
    return 0;
}