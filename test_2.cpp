#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B, C, D;
    cin >> A >> B >> C >> D;

    long long total = A + B + C + D;

    if (abs(B - C) <= 1) cout << total;
    else cout << total - 1;

    return 0;
}
