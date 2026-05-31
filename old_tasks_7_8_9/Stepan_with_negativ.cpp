#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m, ant = 0;
    cin >> n >> m;

    vector<string> a(n);
    vector<string> b(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (a[i][j] == b[i][j]) {
                ant++;
            }
        }
    }

    cout << ant;
    return 0;
}
