#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;

    long long x = (n * b + a) / (a + b);

    if ((n * b + a) % (a + b) * 2 >= (a + b)) {
        x++;
    }

    if (x < 2) {
        x = 2;
    }
    
    if (x > n - 1) {
        x = n - 1;
    }

    cout << x;

    return 0;
}
