#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 942;
    int ans = 0;
    while (n > 0) {
        ans += n % 10;
        n / 10;
    }
    cout << ans;
}