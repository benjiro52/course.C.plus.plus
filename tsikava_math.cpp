#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    long long best = 0;

    for (int i = 0; i < n; i++) {
        long long now = 0;
        for (int j = i; j < n; j++) {
            if (a[j] > 0) {
                now += 2 * a[j];
            }
            if (now > best) {
                best = now;
            }
        }
    }
        
    cout << best;
    return 0;
}