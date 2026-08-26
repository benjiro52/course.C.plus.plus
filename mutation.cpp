#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    vector<int> genome(n);
    for (int i = 0; i < n; i++) {
        cin >> genome[i];
    }

    while (k--) {
        vector<int> next(n, 0);
        for (int i = 0; i < n; i++) {
            int x = genome[i];

            if (x >= 1 && x <= n) {
                next[x - 1]++;
            }
        }
        genome = next;
    }

    for (int i = 0; i < n; i++) {
        cout << genome[i] << " ";
    }

    return 0;
}