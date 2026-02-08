#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> a(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        a[i] = a[i - 1];
        if (s[i - 1] == '0') a[i]++;
    }

    int t;
    cin >> t;
    while (t--) {
        int l, r;
        cin >> l >> r;
        cout << a[r] - a[l - 1] << endl;
    }
    return 0;
}