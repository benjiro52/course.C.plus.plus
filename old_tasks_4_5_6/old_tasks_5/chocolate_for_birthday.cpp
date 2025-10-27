#include <iostream>
using namespace std;

int main()
{
    long long m, n, k;
    cin >> m >> n >> k;

    long long max_chocolate = 0;

    for (long long i = 1; i <= m; i++) {
        long long j = min(n, (m * n - k + 1) / i);
        long long chocolate = i * j;
        max_chocolate = max(max_chocolate, chocolate);
    }

    for (long long j = 1; j <= n; j++) {
        long long i = min(m, (m * n - k + 1) / j);
        long long chocolate = i * j;
        max_chocolate = max(max_chocolate, chocolate);
    }

    cout << max_chocolate;

    return 0;
}