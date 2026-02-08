#include <bits/stdc++.h>
using namespace std;

int main() {
    bool check;
    int a;
    cin >> a;

    if (a % 2 == 0) {
        check = true;
    } else {
        check = false;
    }

    if (check == 1) {
        cout << "true";
    } else {
        cout << "false";
    }
}

