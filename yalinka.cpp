#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int width = 2 * n + 1;

    for (int k = 1; k <= n; k++) {
        for (int j = 0; j <= k; j++) {
            int stars = 2 * j + 1;
            int dots = (width - stars) / 2;

            for (int i = 0; i < dots; i++) {
                cout << ".";
            }
            for (int i = 0; i < stars; i++) {
                cout << "*";
            }
            for (int i = 0; i < dots; i++) {
                cout << ".";
            }
            cout << endl;
        }
    }

    return 0;
}