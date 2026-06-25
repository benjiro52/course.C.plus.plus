#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int a[100][100];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> a[i][j];
        }
    }

    vector<int> sum;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (i + 1 < n) {
                sum.push_back(a[i][j] + a[i + 1][j]);
            }
            if (j + 1 < m) {
                sum.push_back(a[i][j] + a[i][j + 1]);
            }
        }
    }

    sort(sum.begin(), sum.end());
    cout << sum.front() << " " << sum.back();

    return 0;
}