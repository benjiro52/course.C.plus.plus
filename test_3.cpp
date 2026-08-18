#include <bits/stdc++.h>
using namespace std;

int faktorial(int n) {
    if (n == 1 || n == 0) {
        return 1;
    } else {
        return n * faktorial(n - 1);
    }
}
int factorial_2(int n) {
    int result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}

int main() {
    int ans;
    cin >> ans;

    cout << faktorial(ans);
    return 0;
}