#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, p, t, zero = 0;
    cin >> n >> p >> t;
    
    long long mx = min(p, t);
    long long mn = max(zero, p + t - n);

    cout << mn << " " << mx;

    return 0;
}