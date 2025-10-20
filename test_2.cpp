#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long a = 1, b = 2, c;
    if (n == 1) { cout << 2; return 0; }
    for (int i = 3; i <= n + 2; i++) {
        c = a + b;
        a = b;
        b = c;
    }
    cout << b << endl;
    return 0;
}