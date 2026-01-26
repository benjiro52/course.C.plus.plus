#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, parts = 0, sum = 0, mx = 0;
    cin >> n;

    vector<int> cake(n);

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cake[i] = a;
    }

    sort(cake.begin(), cake.end());
    for (int i = 0; i < n; i++) {
        if (i == n - 1) {
            mx = cake[i];
        }
    }

    for (int i = 0; i < n; i++) {
        sum += cake[i];
    }

    int ans = sum / mx;
    if (sum % mx != 0) {
        cout << "0";
        return 0;
    }
    cout << ans - 1;

    return 0;
}
