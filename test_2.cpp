#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string shields;
    while ((int)shields.size() < n) {
        char c;
        if (!(cin >> c)) {
            break;
        } 
        if (c == '(' || c == ')') {
            shields.push_back(c);
        }
    }

    int left = 1;
    for (int i = 1; i < n; i++) {
        if (shields[i] == shields[0]) left++;
        else break;
    }

    int right = 1;
    for (int i = n - 2; i >= 0; i--) {
        if (shields[i] == shields[n - 1]) right++;
        else break;
    }

    if (shields[0] != shields[n - 1]) {
        cout << n;
    } else {
        cout << (n - min(left, right));
    }
    return 0;
}
