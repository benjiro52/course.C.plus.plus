#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a[100005];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int k = 2; k <= n; k++) {
        int mx = a[0], mx2 = -1;
        for (int i = 1; i < k; i++) {
            if (a[i] > mx) {
                mx2 = mx;
                mx = a[i];
            } else if (a[i] > mx2) {
                mx2 = a[i];
            }
        }
        cout << mx2 << " ";
    }
}