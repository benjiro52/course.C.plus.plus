#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    long long j = e * e * e;
    long long sum = a * a * a + b * b * b + c * c * c + d * d * d;
    if (j >= sum) {
        cout << "1";
    } else {
        cout <<(sum) / j;
    }

    return 0;
}