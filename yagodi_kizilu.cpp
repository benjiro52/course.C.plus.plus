#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    int res = 0, ant = 0;

    for (int i = 1; i <= n; i++) {
        if (i == 1) {
            res = m;
        } else {
            res += i;
        }
        ant += res;
    }

    cout << ant;
    return 0;
}