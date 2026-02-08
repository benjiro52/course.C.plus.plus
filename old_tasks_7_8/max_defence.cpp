#include <bits/stdc++.h>
using namespace std;

int main() {
    int defence_lvl, mx_min, a;
    cin >> defence_lvl;

    vector<char> shields(defence_lvl);

    for (int i = 0; i < defence_lvl; i++) {
        cin >> shields[i];
    }

    for (int i = 0; i < shields.size(); i++) {
        if (shields[i] == '(')  {
            cout << "-(" << endl;
            mx_min++;
        }
        if (shields[i] == ')') {
            mx_min += 0;
        }
    }
    for (int j = defence_lvl - 1; j >= 0; j--) {
        if (shields[j] == ')') {
            cout << "+)" << endl;
            mx_min ++;
        }
        if (shields[j] == '(') {
            mx_min += 0;
        }
    }

    cout << mx_min;
}