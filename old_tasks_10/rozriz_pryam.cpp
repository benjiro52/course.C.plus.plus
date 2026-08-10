#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long M = n / 2;     
    long long K = n - M;     
    
    long long A = M * (n - M);
    long long B = K * M - K * (K - 1) / 2 - (M - M / 2);
    
    cout << A + B;
    
    return 0;
}