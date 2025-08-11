#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int mx = 0, ans = 1;

    for (int i = 1; i <= n; i++) {
        int a = 0;
        for (int d = 1; d * d <= i; d++) {
            if (i % d == 0) {
                a++;
                if (d != i / d) {
                    a++;
                }
            }
        }
        if (a > mx) {
            mx = a;
            ans = i;
        }
    }

    cout << ans << endl << mx;
    
    return 0;
}