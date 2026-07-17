#include <bits/stdc++.h>
using namespace std;

auto add(int n) {
    return [n](int m) {
        int ans = 0;
        ans += n;
        ans += m;
        return ans;
    };
}

int main() {
    cout << add(1)(2); // выведет 3
}