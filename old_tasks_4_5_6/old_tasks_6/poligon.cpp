#include <bits/stdc++.h>
using namespace std;

int main() {
    int s, p;
    cin >> s >> p;

    if (p % 2 != 0) {
        cout << "-1";
        return 0;
    }

    int sum = p / 2;

    for (int b = 1; b <= sum / 2; b++) {
        int a = sum - b;
        if (a < b) {
            break;
        }
        if (a * b == s) {
            cout << a << " " << b;
            return 0;
        }
    }

    cout << "-1";
}