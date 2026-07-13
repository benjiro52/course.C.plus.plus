#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, e, n;
    cin >> s >> e >> n;

    vector<int> x(n);
    for (int i = 0; i < n; i++) {
        cin >> x[i];
    }
    int ans = abs(s - e);
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            int time = abs(s - x[i]) + 1 + abs(x[j] - e);

            if (time < ans) {
                ans = time;
            }
        }
    }
    
    cout << ans; 
    return 0;
}