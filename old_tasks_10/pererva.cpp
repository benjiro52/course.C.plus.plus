#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d, n;
    cin >> a >> b >> c >> d >> n;
    
    int start = a * 60 + b;
    int end = c * 60 + d;
    int rem = (end - start) - n;
    
    int first_part = (rem + 1) / 2;
    int break_start = start + first_part;
    
    cout << break_start / 60 << " " << break_start % 60;
    return 0;
} 