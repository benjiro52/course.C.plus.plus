#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    string t = s;

    sort(t.begin(), t.end());

    if (t[0] == '0') {
        for (int i = 1; i < 4; i++) {
            if (t[i] != '0') {
                swap(t[0], t[i]);
                break;
            }
        }
    }

    cout << t << " ";

    sort(s.begin(), s.end());
    reverse(s.begin(), s.end());
    cout << s;

    return 0;
}