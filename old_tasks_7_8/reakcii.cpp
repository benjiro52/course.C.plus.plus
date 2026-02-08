#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b, c;
    cin >> a >> b >> c;

    long long sum = a + b + c;
    long long ant = max({a, b, c, (sum + 1) / 2});

    cout << ant;
    return 0;
}