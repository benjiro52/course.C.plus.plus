#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, n;
    cin >> x >> y >> n;

    long long min_jumps = (n + x - 1) / x;

    long long block = y + x;
    long long blocks = n / block;
    long long rest = n % block;

    long long jumps = blocks * 2; 
    if (rest >= y) {
        jumps += 1;
        rest -= y;
    }
    jumps += (rest + x - 1) / x;

    cout << min(min_jumps, jumps);
}