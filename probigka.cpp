#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    if (a < b) {
        cout << 1;
    } else {
        cout << 2 * (a - b) + 2;
    }
}
