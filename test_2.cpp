#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, m, k;
    cin >> n >> m >> k;

    long long right = n - 1;
    long long up = m - 1;

    long long diagonal = min(right, up);
    long long steps_diagonal = (diagonal + k - 1) / k;

    long long remain_right = right - diagonal;
    long long remain_up = up - diagonal;

    long long steps_right = (remain_right + k - 1) / k;
    long long steps_up = (remain_up + k - 1) / k;

    long long ans = steps_diagonal + steps_right + steps_up;

    cout << ans;

    return 0;
}
