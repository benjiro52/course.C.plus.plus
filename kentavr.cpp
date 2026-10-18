#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, x, y;
    cin >> n >> x >> y;

    long long bishop = min(x - 1, y - 1) + min(x - 1, n - y) + min(n - x, y - 1) + min(n - x, n - y);

    int dx[8] = {-2, -2, -1, -1, 1, 1, 2, 2};
    int dy[8] = {-1, 1, -2, 2, -2, 2, -1, 1};
    long long knight = 0;
    for (int i = 0; i < 8; i++) {
        long long nx = x + dx[i];
        long long ny = y + dy[i];
        if (nx >= 1 && nx <= n && ny >= 1 && ny <= n) {
            knight++;
        }
    }

    cout << bishop + knight;
}