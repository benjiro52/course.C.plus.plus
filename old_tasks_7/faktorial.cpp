#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ant = 1;
    for (int i = 2; i <= n; i++) {
        ant *= i;
    }
    cout << ant;
    return 0;
}