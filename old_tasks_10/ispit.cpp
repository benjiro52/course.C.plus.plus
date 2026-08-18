#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, a, b;
    cin >> n >> a >> b;

    cout << max(0LL, a - b) << endl;
    cout << min(a, n - b);
    return 0;
}
// rest, i am so fucked up