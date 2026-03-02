#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t1, t2;
    cin >> t1 >> t2;

    long long a = t1, b = t2;
    while (b != 0) {
        long long j = b;
        b = a % b;
        a = j;
    }

    long long gcd = a;
    long long lcm = t1 / gcd * t2;

    cout << lcm;
    return 0;
}