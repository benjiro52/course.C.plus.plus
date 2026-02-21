#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    if (k == 1) {
        cout << n;
        return 0;
    }

    long long ant = 0;

    for (int d = 1; d <= (n - 1) / (k - 1); d++) {
        ant += n - (k - 1) * d;
    }

    cout << ant;
    return 0;
}