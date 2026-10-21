#include <bits/stdc++.h>
using namespace std;

int main() {
    int a1, a2;
    cin >> a1 >> a2;

    int a = 0, b = 0, c = 0, d = 0;
    for (int i = a1; i <= a2; i++) {
        if (i % 2 == 0 || i % 3 == 0) {
            a++;
        }
        int x = i;
        int total = 0;
        int different = 0;

        for (int p = 2; p * p <= x; p++) {
            if (x % p == 0) {
                different++;
                while (x % p == 0) {
                    x /= p;
                    total++;
                }
            }
        }
        if (x > 1) {
            different++;
            total++;
        }
        if (total == 1) {
            b++;
        }
        if (total == 2 && different == 2) {
            c++;
        }
        if (total == 3 || total == 4) {
            d++;
        }
    }

    cout << a << '\n';
    cout << b << '\n';
    cout << c << '\n';
    cout << d << '\n';
    
    return 0;
}