#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> ans(n + 1);

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        ans[x] = n - i + 1;
    }

    for (int i = 1; i <= n; i++) {
        cout << ans[i] << endl;
    }

    return 0;
}