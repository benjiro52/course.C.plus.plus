#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<pair<int, int>> ans;

    ans.push_back({1, a[0]});

    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            ans.push_back({i + 1, a[i]});
        }
    }

    cout << ans.size() << "\n";

    for (int i = 0; i < (int)ans.size(); i++) {
        cout << ans[i].first << " " << ans[i].second << "\n";
    }

    return 0;
}
