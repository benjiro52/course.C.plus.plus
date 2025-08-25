#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int res = ((a - 1 + b) % 12) + 1;
    cout << res;

    return 0;
}