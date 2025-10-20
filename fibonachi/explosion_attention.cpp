#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    if (n == 1) {
        cout << 2 << endl;
        return 0;
    }
    if (n == 2) {
        cout << 3 << endl;
        return 0;
    }

    long long f1 = 2; 
    long long f2 = 3; 
    long long f;

    for (int i = 3; i <= n; ++i) {
        f = f1 + f2; 
        f1 = f2;
        f2 = f;
    }

    cout << f2 << endl;
    return 0;
}
