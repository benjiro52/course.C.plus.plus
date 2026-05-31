#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, w;
    cin >> n >> w;
    
    long long k_min;
    if (n <= w - 1) {
        k_min = 0;
    } else {
        k_min = (n - w + 1 + w - 1) / w; 
    }
                      
    cout << n - k_min;
    return 0;
}