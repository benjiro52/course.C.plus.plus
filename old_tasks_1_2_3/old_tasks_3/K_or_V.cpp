#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    if (a * b > c * d) {
        cout << "K";
    }
    if (a * b < c * d) {
        cout << "V";
    }
    if (a * b == c * d) {
        cout << "E";
    }

    return 0;
}