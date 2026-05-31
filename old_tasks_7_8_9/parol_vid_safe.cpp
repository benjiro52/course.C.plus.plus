#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.size();

    vector<int> bad;
    for (int i = 0; i < n / 2; i++) {
        if (s[i] != s[n - 1 - i]) {
            bad.push_back(i);
        }
    }
    
    if (bad.size() == 0) {
        cout << "YES";
        return 0;
    }

    if (bad.size() == 1 && n % 2 == 1) {
        cout << "YES";
        return 0;
    }

    if (bad.size() == 2) {
        int i = bad[0], j = bad[1];
        if (s[i] == s[n - 1 - j] && s[j] == s[n - 1 - i]) {
            cout << "YES";
            return 0;
        }
    }
    
    cout << "NO";
    return 0;
}