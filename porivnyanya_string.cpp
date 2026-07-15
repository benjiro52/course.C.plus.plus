#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    
    while (a.size() > 1 && a[0] == '0') {
        a.erase(a.begin());
    }
    while (b.size() > 1 && b[0] == '0') {
        b.erase(b.begin());
    }
    
    if (a.size() != b.size()) {
        if (a.size() > b.size()) {
            cout << ">";
        } else {
            cout << "<";
        }
    } else {
        if (a > b) {
            cout << ">";
        } else if (a < b) {
            cout << "<";
        } else {
            cout << "=";
        }
    }
    return 0;
}