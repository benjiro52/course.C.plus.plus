#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    long long a = 1;
    for (int i = 0; i < n; i++) {
        cout << a << endl;
        a *= 3;
    }

    return 0;
}