#include <bits/stdc++.h>
using namespace std;

int a[505][505];

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int r1 = -1;
    int r2 = -1;

    for (int i = 0; i < n; i++) {
        for (int j = 1; j < n; j++) {
            if (a[i][j] <= a[i][j - 1]) {
                if (r1 == -1) {
                    r1 = i;
                } else {
                    r2 = i;
                }
                break;
            }
        }
    }
    
    if (r2 != -1) {
        for (int j = 0; j < n; j++) {
            swap(a[r1][j], a[r2][j]);
        }
    }

    int c1 = -1;
    int c2 = -1;

    for (int j = 0; j < n; j++) {
        for (int i = 1; i < n; i++) {
            if (a[i][j] <= a[i - 1][j]) {
                if (c1 == -1) {
                    c1 = j;
                } else {
                    c2 = j;
                }
                break;
            }
        }
    }

    if (c2 != -1) {
        for (int i = 0; i < n; i++) {
            swap(a[i][c1], a[i][c2]);
        }
    }

    if (r1 == -1) {
        cout << "-1 -1";
    } else {
        cout << r1 + 1 << " " << r2 + 1;
    }

    if (c1 == -1) {
        cout << "-1 -1";
    } else {
        cout << c1 + 1 << " " << c2 + 1;
    }

    return 0;
}
