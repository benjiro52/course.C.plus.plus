#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    set<string> fractions;

    for (int i = 0; i < n; i++) {
        long long a, b;
        cin >> a >> b;

        if (a == 0) {
            fractions.insert("0/1");
            continue;
        }

        long long g = gcd(abs(a), b);
        a /= g;
        b /= g;

        string fraction = to_string(a) + "/" + to_string(b);
        fractions.insert(fraction);
    }

    cout << fractions.size();
    return 0;
}