#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N;
    cin >> N;

    long long ans = 1;

    while (ans * 2 <= N) {
        ans *= 2;
    }

    cout << ans;
}