#include <iostream>
using namespace std;

int main() {
    int i, n;
    long long x, y;

    cout << "Введіть n → ";
    cin >> n;

    x = 1;
    y = 1;

    for (i = 3; i <= n; i++) {
        y = x + y;
        x = y - x;
    }

    cout << y;

    return 0;
}
