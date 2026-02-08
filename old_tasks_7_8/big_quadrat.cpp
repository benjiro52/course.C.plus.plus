#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a < b) swap(a, b);
    if (c < d) swap(c, d);

    long long ant1 = min(a + c, min(b, d));
    long long ant2 = min(min(a, c), b + d);
    
    cout << max(ant1, ant2);
    return 0;
}
