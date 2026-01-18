#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    string a[55];

    for (int i = 0; i < n; i++) {
        a[i] = string(n, '.');
    }

    int x = n / 2;
    int y = n / 2;

    for (int t = 0; t < s.size(); t++) {
        char c = s[t];

        if (c == 'L') {
            if (y > 0) y--;
        }
        else if (c == 'R') {
            if (y < n - 1) y++;
        }
        else if (c == 'U') {
            if (x > 0) x--;
        }
        else if (c == 'D') {
            if (x < n - 1) x++;
        }
        else {
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < n; j++) {
                    if (abs(i - x) + abs(j - y) < k) {
                        a[i][j] = c;
                    }
                }
            }
        }
    }
    // 
    for (int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }

    return 0;
}
