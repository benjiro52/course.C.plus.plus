#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    
    long long best = 0;
    
    for (int pa = 0; pa <= 1; pa++) {
        for (int pb = 0; pb <= 1; pb++) {
            long long ones_for_parity = 2*pa + 2*pb;
            if (ones_for_parity > n) continue;
            
            long long ones_rem = n - ones_for_parity;
            long long two_segs = m + ones_rem / 2;
            
            long long S = two_segs / 2;
            
            for (long long x = S/2; x <= S/2+1; x++) {
                long long y = S - x;
                if (y < 0) continue;
                long long a = 2*x + pa;
                long long b = 2*y + pb;
                if (a > 0 && b > 0) best = max(best, a*b);
            }
        }
    }
    
    cout << best;

    return 0;
}