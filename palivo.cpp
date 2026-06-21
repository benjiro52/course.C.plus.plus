#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, y, a, b;
    cin >> n >> k >> y >> a >> b;
    
    long long total = 0;
    for (int x = 0; x < n; x += k) {
        int km = min(k, n - x);
        
        int s = 0;
        int temp = x;
        while (temp > 0) {
            s += temp % 10;
            temp /= 10;
        }
        
        int price;
        if (s % y == 0) {
            price = b;
        } else {
            price = a;
        }
        
        total += (long long)km * price;
    }
    
    cout << total;
    return 0;
}