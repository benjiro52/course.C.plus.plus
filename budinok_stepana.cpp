#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int x1, y1, x2, y2;
    int a = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int x;
            cin >> x;

            if (x == 1) {
                if (a == 0) {
                    x1 = i;
                    y1 = j;
                } else {
                    x2 = i;
                    y2 = j;
                }
                a++;
            }
        }
    }

    int ant = 0;
    
    int top = x2;
    int bottom = n - x2 - 1;
    int left = y2;
    int right = m - y2 - 1;

    int best1 = 0;

    if (top * m > best1) {
        best1 = top * m;
    }
    if (bottom * m > best1) {
        best1 = bottom * m;
    }
    if (left * n > best1) {
        best1 = left * n;
    }
    if (right * n > best1) {
        best1 = right * n;
    }

    top = x1;
    bottom = n - x1 - 1;
    left = y1;
    right = m - y1 - 1;

    int best2 = 0;

    if (top * m > best2) {
        best2 = top * m;
    }
    if (bottom * m > best2) {
        best2 = bottom * m;
    }
    if (left * n > best2) {
        best2 = left * n;
    }
    if (right * n > best2) {
        best2 = right * n;
    }

    if (best1 > ant) {
        ant = best1;
    }
    if (best2 > ant) {
        ant = best2;
    }

    cout << ant;

    return 0;
}