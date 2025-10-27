#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int n, m, k;
    cin >> n >> m >> k;
    int s1 = 0, s2 = 0;
    for(int i = 0; i < n; i ++) {
        int x;
        cin >> x;
        s1 += x;
    }
    for(int i = 0; i < m; i ++) {
        int x;
        cin >> x;
        s2 += x;
    }
    int res = k / min(s1, s2) + 1;
    if (k % min(s1, s2) != 0) res += 1;

    cout << res;

    return 0;
}
