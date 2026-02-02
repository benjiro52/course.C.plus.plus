#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, parts = 0;
    cin >> n;

    vector<int> cake(n);

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        cake[i] = a;
    }

    int mx = 0;
    for (int i = 0; i < n; i++) {
        if (cake[i] > cake[i - 1]) {
            mx = cake[i];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i != j) {
                parts = cake[i] + cake[j];
                if (parts = mx) {
                    cout << parts << endl;
                    //cout << i << " " << j;
                    return 0;
                }
            }
        }
    }
    return 0;
}
