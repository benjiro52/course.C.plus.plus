#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long all = n * (n + 1) / 2;
    long long odd = 0;
    long long cnt = 0;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        if (x % 2 != 0) {
            cnt++;
        }
        else {
            odd += cnt * (cnt + 1) / 2;
            cnt = 0;
        }
    }

    odd += cnt * (cnt + 1) / 2;
    cout << all - odd;
    
    return 0;
}