#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, m, n;
    cin >> a >> m >> n;

    long long rem = 1 % a;
    long long pos = 0;

    while (pos < n) {
        rem = rem * 10;

        int j = rem / a;
        rem = rem % a;

        pos++;

        if (pos >= m) {
            cout << j;
        }
        
        if (rem == 0) {
            while (pos < n) {
                pos++;
                if (pos >= m) {
                    cout << 0;
                }
            }
        }
    }

    return 0;
}
