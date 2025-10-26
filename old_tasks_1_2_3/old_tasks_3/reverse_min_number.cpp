#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long x, y;
    cin >> x >> y;

    long long a = 0, b = 0;

    while (x > 0) {
        a = a * 10 + x % 10;  
        x = x / 10;
    }

    while (y > 0) {
        b = b * 10 + y % 10; 
        y = y / 10;
    }

    if (a < b) {
        cout << a;
    } else {
        cout << b;
    }

    return 0;
}
