#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    
    long long r = (n + 1) / 2;
    long long c = (m + 1) / 2;
    
    long long row  = m - 1;
    long long col  = n - 1;
    long long diag1 = min(r - 1, c - 1) + min(n - r, m - c);
    long long diag2 = min(r - 1, m - c) + min(n - r, c - 1);
    
    cout << row + col + diag1 + diag2;

    return 0;
}