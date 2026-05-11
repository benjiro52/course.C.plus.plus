#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int s = sqrt(n);
    if (s * s == n) {
        cout << 1; 
        return 0; 
    }

    int tmp = n;
    while (tmp % 4 == 0) {
        tmp /= 4;
    }
    if (tmp % 8 == 7) {
        cout << 4; 
        return 0; 
    }
    
    for (int a = 1; a * a <= n; a++) {
        int b = sqrt(n - a * a);
        if (b * b == n - a * a) {
            cout << 2;
            return 0; 
        }
    }
    
    cout << 3;
}