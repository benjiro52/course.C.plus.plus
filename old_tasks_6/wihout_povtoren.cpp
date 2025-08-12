#include <iostream>
using namespace std;

int main() {
    int n, k;
    string s;
    cin >> n >> k;
    cin >> s;

    if (k == 1 && n > 1) {
        cout << -1;
        return 0;
    }

    int ant = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            ant++;
            for (char c = '0'; c < '0' + k; c++) {
                if (c != s[i - 1] && (i + 1 == n || c != s[i + 1])) {
                    s[i] = c;
                    break;
                }
            }
        }
    }

    cout << ant;
    //return 0;
}