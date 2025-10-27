#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b, ant = 0;
    cin >> n >> a >> b;

    while (true) {
        long long max_3 = min(b, n / 3);
        long long need_1 = n - max_3 * 3;
        if (need_1 <= a && max_3 >= 0) {
            ant++;
            a -= need_1;
            b -= max_3;
        } else if (a >= n) {
            ant++;
            a -= n;
        } else {
            break;
        }
    }
    cout << ant;

    return 0;
}
