#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;
    
    if (a + b == c) {
        cout << a << "+" << b << "=" << c;
        return 0;
    }
    if (a - b == c) {
        cout << a << "-" << b << "=" << c;
        return 0;
    }
    if (a * b == c) {
        cout << a << "*" << b << "=" << c;
        return 0;
    }
    if (b != 0 && a / b == c && a % b == 0) {
        cout << a << "/" << b << "=" << c;
        return 0;
    }

    if (b + c == a) {
        cout << a << "=" << b << "+" << c;
        return 0;
    }
    if (b - c == a) {
        cout << a << "=" << b << "-" << c;
        return 0;
    }
    if (b * c == a) {
        cout << a << "=" << b << "*" << c;
        return 0;
    }
    if (c != 0 && b / c == a && b % c == 0) {
        cout << a << "=" << b << "/" << c;
        return 0;
    }

    return 0;
}
