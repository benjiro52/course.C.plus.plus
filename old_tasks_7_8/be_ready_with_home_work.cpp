#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c;
    cin >> a >> b >> c;

    int rem = b - c;
    if (rem < 0) rem = 0;

    if (a >= rem) {
        cout << "YES";  
    } else {
        cout << "NO";
    }

    return 0;
}