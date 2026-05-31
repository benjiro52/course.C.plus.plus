#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    int m;
    cin >> n >> m;

    vector<long long> k(m);
    for (int i = 0; i < m; i++) cin >> k[i];

    sort(k.begin(), k.end());

    int ant = 0;
    for (long long x : k) {
        if (n >= x) {
            n -= x;
            ant++;
        } else {
            break; 
        }
    }

    cout << ant;
    return 0;
}   