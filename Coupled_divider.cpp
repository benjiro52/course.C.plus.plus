#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ant = 1;
    for (long long i = 1; i < n; i++) {
        if (n % i == 0 && (n - i) % i == 0) {
            ant = i;
        }
    }

    cout << ant;
}
