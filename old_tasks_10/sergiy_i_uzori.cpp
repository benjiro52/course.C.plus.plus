#include <bits/stdc++.h>
using namespace std;

long long oddUpTo(long long n) {
    if (n < 0) return 0;
    return (n + 1) / 2;
}

long long oddCount(long long a, long long b) {
    if (a > b) return 0;
    return oddUpTo(b) - oddUpTo(a - 1);
}

long long f(long long X, long long Y) {
    if (X > Y) swap(X, Y);
    if (X == 0) return 0;
    
    long long m = X / 2;
    long long A = m * ( 2 *m + 1); 
    long long B = X * oddCount(X, Y - 1); 
    
    return A + B;
}

int main() {
    long long xa, ya, xb, yb;
    cin >> xa >> ya >> xb >> yb;
    
    long long ans = f(xb, yb) - f(xa, yb) - f(xb, ya) + f(xa, ya);
    cout << ans;
}