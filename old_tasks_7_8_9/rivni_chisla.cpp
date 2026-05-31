#include <bits/stdc++.h>
using namespace std;

int main() {
    int l;
    cin >> l;

    if (l == 1) {
        cout << 9;
    } else if (l == 2) {
        cout << 99;
    } else {
        cout << 9;
        for (int i = 1; i < l - 1; i++) {
            cout << 8;
        }
        cout << 9;
    }

    return 0;
}