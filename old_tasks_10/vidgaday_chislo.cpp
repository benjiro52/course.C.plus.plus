#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s;
    cin >> s;

    long long n = s;
    vector<long long> p;

    for (long long i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            p.push_back(i);

            while (n % i == 0) {
                n /= i;
            }
        }
    }

    if (n > 1) {
        p.push_back(n);
    }

    for (int i = 0; i < p.size(); i++) {
        cout << s - p[i] << " ";
    }

    return 0;
}