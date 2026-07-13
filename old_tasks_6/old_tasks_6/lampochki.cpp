#include <iostream>
using namespace std;

int main() {
    int a, b, c, d, e, f, n, m;
    cin >> a >> b >> c >> d >> e >> f >> n >> m;
    long long one = 1;

    long long times1 = (m + c - 1) / c;
    long long times2 = (m + f - 1) / f;

    long long a_cost = one * n * times1 * a + one * n * m * b;
    long long b_cost = one * n * times2 * d + one * n * m * e;

    if (b_cost < a_cost) {
        cout << b_cost << " 0 " << n * times2;
    } else if (b_cost > a_cost) {
        cout << a_cost << " " << n * times1 << " 0";
    } else {
        cout << b_cost << " 0 " << n * times2;
    }

    return 0;
}