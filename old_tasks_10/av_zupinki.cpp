#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, n;
    cin >> k >> n;
    long long x = n % k;

    if (x < k - x) {
        cout << x;
    }
    else {
        cout << k - x;
    }

    return 0;
}