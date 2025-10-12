#include <iostream>
using namespace std;

int main() {
    int i, n;
    long long a[47];

    a[1] = 1;
    a[2] = 1;

    cout << "Введіть n → ";
    cin >> n;

    for (i = 3; i <= n; i++)
        a[i] = a[i - 1] + a[i - 2];

    cout << a[n] << endl;

    return 0;
}
