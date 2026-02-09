#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;

    while (k--) {
        long long a, b, h;
        cin >> a >> b >> h;

        int ones = (a == 1) + (b == 1) + (h == 1);

        if (ones >= 2) {
            cout << "NO" << endl;
        }
        else if (a % 2 == 1 && b % 2 == 1 && h % 2 == 1) {
            cout << "NO" << endl;
        }
        else {
            cout << "YES" << endl;
        }
    }

    return 0;
}
