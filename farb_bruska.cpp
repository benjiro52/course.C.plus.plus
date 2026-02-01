#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    int k;
    cin >> a >> b >> c >> k;

    long long total = a * b * c;
    long long inner = max(0LL, (a - 2) * (b - 2) * (c - 2));
    long long face = 0, edge = 0, corner = 8;
 
    if (a > 2 && b > 2) face += 2 * (a - 2) * (b - 2);
    if (a > 2 && c > 2) face += 2 * (a - 2) * (c - 2);
    if (b > 2 && c > 2) face += 2 * (b - 2) * (c - 2);

    if (a > 2) edge += 4 * (a - 2);
    if (b > 2) edge += 4 * (b - 2);
    if (c > 2) edge += 4 * (c - 2);

    long long result = 0;
    if (k == 0) result = inner;
    else if (k == 1) result = face;
    else if (k == 2) result = edge;
    else if (k == 3) result = corner;
    else result = 0;

    cout << result;
    return 0;
}