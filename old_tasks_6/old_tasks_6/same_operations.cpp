#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, n;
    cin >> a >> n;

    for (int i = 0; i < n; i ++) {
        long long j = a;
        j *= a;
        a = j % 1000;
    }
    cout << a;
    return 0;
}