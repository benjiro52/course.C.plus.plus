#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;

    long long ant = 0;
    ant = 8 * n * m;

    if (n > 1) {
        ant += 2 * m * (n - 1);
    }

    if (m > 1) {
        ant += 2 * n * (m - 1);
    }

    if (n > 1 && m > 1) {
        ant += 4 * (n - 1) * (m - 1);
    }
    
    cout << ant;
}