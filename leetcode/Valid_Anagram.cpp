#include <bits/stdc++.h>
using namespace std;

int main() {
    string s, t;
    cin >> s >> t;

    map<char, int> map;

    if (s.size() != t.size()) return false;

    for (int i = 0; i < s.size(); i++) {
        map[s[i]]++;
    }
    for (int j = 0; j < t.size(); j++) {
        if (map[t[j]] == 0) {
            return false;
        }
        map[t[j]]--;
    }

    return true;
}

