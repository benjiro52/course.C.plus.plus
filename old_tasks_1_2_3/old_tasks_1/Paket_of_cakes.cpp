#include <iostream>

using namespace std;

int main()
{
    int a, b, n, vers1, vers2;
    cin >> a >> b;

    if ((a + b) % 3 != 0) {
        cout << "-1";
    } else {
        n = (a + b) / 3;
        if (a >= n && b >= n) {
            cout << a - n << " " << b - n;
        } else {
        cout << "-1";
        }
    } 

    return 0;
}