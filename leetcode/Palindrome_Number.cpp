#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cin >> x;
    bool is_palindrome = false;

    if (x < 0) {
        cout << is_palindrome;
        return 0;
    }

    int original = x;
    long long reserved = 0;

    while (x > 0) {
        reserved = reserved * 10 + x % 10;
        x /= 10;
    }

    if (original == reserved) {
        is_palindrome = true;
    }
    cout << is_palindrome;
    return 0;
}