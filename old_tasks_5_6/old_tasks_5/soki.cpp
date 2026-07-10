#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;
    int all = a + b + c;
    int j = all - x;

    if (j <= a) {
        a -= j;
        j = 0;
    } else {
        j -= a;
        a = 0;
    }
    if (j <= b) {
        b -= j;
        j = 0;
    } else {
        j -= b;
        b = 0;
    }
    if (j <= c) {
        c -= j;
        j = 0;
    } else {
        c -= j;
    }
    cout << a << endl;
    cout << b << endl;
    cout << c;

    return 0;
}