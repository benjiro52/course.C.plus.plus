#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    long long ant = a + b + c + d;

    if (abs(b - c) <= 1) {
        cout << ant;
    } else {
        cout << ant - 1;
    }
}
