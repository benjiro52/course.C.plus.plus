#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    
    bool hasLower = false, hasUpper = false, hasDigit = false;
    
    for (int i = 0; i < s.size(); i++) {
        if (s[i] >= 'a' && s[i] <= 'z') hasLower = true;
        if (s[i] >= 'A' && s[i] <= 'Z') hasUpper = true;
        if (s[i] >= '0' && s[i] <= '9') hasDigit = true;
    }
    
    if (s.size() >= 8 && hasLower && hasUpper && hasDigit) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}