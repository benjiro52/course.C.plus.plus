#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    int ans = 0;
    for (int d = 1; d <= 9; d++) {
        long long x = d;
        while (x <= n) {
            ans++;
            x = x * 10 + d;
        }
    }

    cout << ans ;
}