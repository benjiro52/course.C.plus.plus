#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    
    int a = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            for (int d = 0; d < k; d++) {
                if (d != s[i - 1] - '0' && (i + 1 >= n || d != s[i + 1] - '0')) {
                    s[i] = '0' + d;
                    a++;
                    break;
                }
            }
        }
    }
    
    if (n > 1 && s[n - 1] == s[n - 2]) {
        cout << -1;
    } else {
        cout << a;
    }

    return 0;
}