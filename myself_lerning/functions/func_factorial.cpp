#include <bits/stdc++.h>
using namespace std;

int faktorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}

int main() {
    int ans;
    cin >> ans;

    cout << faktorial(ans);
    return 0;
}