#include <bits/stdc++.h>
using namespace std;

int main() {
    string password;
    cin >> password;

    bool lower = false;
    bool upper = false;
    bool digit = false;

    for (int i = 0; i < password.size(); i++) {
        if (islower(password[i])) {
            lower = true;
        }
        if (isupper(password[i])) {
            upper = true;
        }
        if (isdigit(password[i])) {
            digit = true;
        }

        if (password[i] == password[i - 1]) {
            cout << "NO";
            return 0;
        }
    }

    if (lower && upper && digit) {
        cout << "YES";
    } else {
        cout << "NO";
    }
    return 0;
}