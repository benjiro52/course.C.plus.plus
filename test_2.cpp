#include <bits/stdc++.h>
using namespace std;

int main() {
    long long N, A, B;
    cin >> N >> A >> B;

    long long ans = 0;

    while (true) {
        bool ok = false;
        if (N >= 3 && B > 0) {
            long long need3 = min(B, N / 3);
            long long rest = N - need3 * 3;

            if (rest <= A) {
                A -= rest;
                B -= need3;
                ans++;
                ok = true;
            }
        }

        if (!ok && A >= N) {
            A -= N;
            ans++;
            ok = true;
        }

        if (!ok) break;
    }

    cout << ans;
}
