#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    long long n[3] = {a, b, c};
    sort(n, n + 3);
    
    long long d1 = n[1] - n[0];
    long long d2 = n[2] - n[1];
    
    if (d1 == d2) {
        cout << n[0] - d1 << " "; 
        cout << n[2] + d1;        
    }
    else if (d2 == 2 * d1) {
        cout << n[0] + 2 * d1;
    }
    else if (d1 == 2 * d2) {
        cout << n[0] + d2;
    }

    return 0;
}