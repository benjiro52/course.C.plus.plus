#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int x = k;
    int length = 0;

    while (x > 0) {
        length++;
        x /= 10;
    }

    int number = k % 10;

    cout << number * length << '\n';

    return 0;
}