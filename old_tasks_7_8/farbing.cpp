#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s1, g1, k1;
    long long s2, g2, k2;
    long long s3, g3, k3;
    long long a, b, c;

    cin >> s1 >> g1 >> k1;
    cin >> s2 >> g2 >> k2;
    cin >> s3 >> g3 >> k3;
    cin >> a >> b;

    long long area = 4 * a * b;

    long long cans1 = (area + s1 - 1) / s1;
    long long cans2 = (area + s2 - 1) / s2;
    long long cans3 = (area + s3 - 1) / s3;

    long long price1 = cans1 * (g1 * 100 + k1);
    long long price2 = cans2 * (g2 * 100 + k2);
    long long price3 = cans3 * (g3 * 100 + k3);

    long long min_price = min({price1, price2, price3});

    cout << min_price / 100 << " " << min_price % 100;
}