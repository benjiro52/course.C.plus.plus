#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "A man, a plan, a canal: Panama";
    string t;
    for (char c : s) {
        if (isalnum(c)) {
            t += tolower(c);
        }
    }
    int l = 0, r = t.size() - 1;

    while (l < r) {
        if (t[l] == t[r]) {
            l++;
            r--;
        } else {
            cout << "False";
            return 0;
        }
    }

    cout << "True";
}