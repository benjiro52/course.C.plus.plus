#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (b == c) {
        cout << a << " " << b << " " << c << " " << d << endl;
    } else if (b == d) {
        cout << a << " " << b << " " << d << " " << c << endl;
    } else if (a == c) {
        cout << b << " " << a << " " << c << " " << d << endl;
    } else if (a == d) {
        cout << b << " " << a << " " << d << " " << c << endl;
    } else {
        cout << -1 << endl;
    }
    return 0;
}