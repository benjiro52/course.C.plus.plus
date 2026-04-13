#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, gr1 = 0, gr2 = 0;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    
    for (int i = 0; i < n; i++) {
        if (i == 0 || a[i] != a[i - 1]) {
            if (a[i] == 0) {
                gr1++;
            }
            else {
                gr2++;
            }
        }
    }
    
    cout << min(gr1, gr2);
}