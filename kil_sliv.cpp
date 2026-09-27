#include <bits/stdc++.h>
using namespace std;

int main() {
    int k;
    cin >> k;
    cin.ignore();

    string s;
    getline(cin, s);

    int count = 0;
    int length = 0;

    for (int i = 0; i < s.size(); i++) {
        char c = s[i];
        if (c == ',') {
            if (length == k) {
                count++;
            }
            length = 0;
        } else {
            length++;
        }
    }

    if (length == k) {
        count++;
    }

    cout << count;
    return 0;
}