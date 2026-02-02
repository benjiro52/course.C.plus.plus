#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long sum = a + b + c;

    if (sum % 3 != 0) {
        cout << -1;
        return 0;
    }

    long long target = sum / 3;

    long long moves = 0;
    if (a > target) moves += a - target;
    if (b > target) moves += b - target;
    if (c > target) moves += c - target;

    cout << moves;
    return 0;
}
