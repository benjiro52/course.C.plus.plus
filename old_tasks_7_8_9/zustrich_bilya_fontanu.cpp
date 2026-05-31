#include <bits/stdc++.h>
using namespace std;

int main() {
    long long m, p;
    cin >> m >> p;

    long long a = m, b = p;
    while (b) {
        long long t = b;
        b = a % b;
        a = t;
    }
    long long gcd = a;
    long long t = m / gcd * p;

    if ((t / m) % 2 == 1 && (t / p) % 2 == 1) {
        cout << t;
    } else {
        cout << -1;
    }
        
    return 0;
}