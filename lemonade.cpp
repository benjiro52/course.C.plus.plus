#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, n, j = 0, x = 1;
    cin >> a >> b >> n;

    while (true) {
        if (x % a == 0 || x % b == 0) {
            j++;
            if (j == n) {
                cout << x;
                break;
            }
        }
        x++;
    }
}