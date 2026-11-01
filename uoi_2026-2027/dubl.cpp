#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == b && b == c) {
        cout << 30;
    } else if (a == b || b == c || a == c) {
        cout << 20;
    } else if (a + b == c || a + c == b || b + c == a) {
        cout << 10;
    } else {
        cout << 0;
    }
}