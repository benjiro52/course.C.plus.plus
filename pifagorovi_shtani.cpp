#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k;
    cin >> k;

    if (k % 2 == 0 || k == 1) {
        cout << "NO";
    } else {
        long long b = (k * k - 1) / 2;
        long long c = b + 1;
        cout << b << " " << c;
    }
}