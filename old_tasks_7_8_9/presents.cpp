#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;

    long long ant = 0;

    long long use = min(b, (a + 3 * b) / n);

    for (long long i = max(0LL, use - 2); i <= use; i++) {
        long long candies = a + 3 * i;
        ant = max(ant, candies / n);
    }

    cout << ant;
}
