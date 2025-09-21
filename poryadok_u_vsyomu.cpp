#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a;
    cin >> a;
    for (int i = 1; i < n; i++) {
        string b;
        cin >> b;
        if (a.size() > b.size()) {
            string ap = a.substr(0, b.size());
            if (ap == b) {
                b = a;
            } else if (ap > b) {
                b += string(a.size() + 1 - b.size(), '0');
            } else {
                b += string(a.size() - b.size(), '0');
            }
        }
        a = b;
    }
    cout << a;  

    return 0;
}

