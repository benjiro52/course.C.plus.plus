#include <bits/stdc++.h>
using namespace std;

int main() {
    long long x, y, a, b;
    cin >> x >> y >> a >> b;
    
    long long ant;
    
    if (x != y) {
        long long count_a = min(a, b);
        long long count_b = min(a + 1, b);
        long long count_c = min(a, b + 1);
        ant = count_a + count_b + count_c;
    } else {
        long long even_count = min(a, b);
        
        long long odd_max1 = -1;
        if (b >= 1) {
            odd_max1 = 2 * min(a, b - 1) + 1;
        }
        
        long long odd_max2 = -1;
        if (a >= 1) {
            odd_max2 = 2 * min(a - 1, b) + 1;
        }
        
        long long odd_max = max(odd_max1, odd_max2);
        
        long long odd_count = 0;
        if (odd_max > 0) {
            odd_count = (odd_max + 1) / 2;
        }
        
        ant = even_count + odd_count;
    }
    
    cout << ant;
    return 0;
}