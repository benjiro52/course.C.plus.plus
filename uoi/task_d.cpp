#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, sim = 0;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        a[i] = j;
    }

    sort(a.begin(), a.end());

    for (int i = 1; i < n; i++) {
        if (a[i] == a[i - 1] ) {
            sim++;
        }
    }

    cout << sim / 4 * 2 ;
    return 0;
}
