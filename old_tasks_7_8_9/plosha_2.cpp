#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, a;
    cin >> n >> m >> a;
    
    long long c = (n + a - 1) / a;
    long long r = (m + a - 1) / a;
    
    cout << c * r;
    return 0;
}