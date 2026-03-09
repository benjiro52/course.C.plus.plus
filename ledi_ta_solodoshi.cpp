#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ant = 0;
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ant++;
            if (i != n / i) {
                ant++;
            }
        }
    }

    cout << ant;
    return 0;
}