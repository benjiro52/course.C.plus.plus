#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, t;
    cin >> n >> t;

    long long s = ((n + 2 * t) * (n + 2 * t)) - n * n;
    //int ans = s - n * n;

    cout << s << endl;

    return 0;
}
