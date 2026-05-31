#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    char p;
    cin >> n >> p;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == 0 || i == n - 1) {
                cout << p;
            } else if (j == 0 || j == n - 1) {
                cout << p;
            } else if (i == j && i == n - 1 - j) {
                cout << 'X';
            } else if (i == j) {
                cout << '\\';
            } else if (i == n - 1 - j) {
                cout << '/';
            } else {
                cout << ' ';
            }
        }
        cout << endl;
    }

    return 0;
}