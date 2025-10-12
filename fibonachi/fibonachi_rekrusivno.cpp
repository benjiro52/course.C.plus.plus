#include <iostream>
using namespace std;

long long a[47];

long long fibo(int x) {
    if (a[x] == 0) {
        if (x == 1 || x == 2)
            a[x] = 1;
        else
            a[x] = fibo(x - 1) + fibo(x - 2);
    }
    return a[x];
}

int main() {
    int n;
    cout << "Введіть n → ";
    cin >> n;
    cout << fibo(n) << endl;
    return 0;
}
