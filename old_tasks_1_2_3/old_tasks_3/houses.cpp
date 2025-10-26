#include <iostream>

using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    if (a > b) {
        swap(a, b);
    }
    if ((a % 2 == b % 2)) {
        cout << (b - a) / 2;
    } else {
        cout << (b - a + 1) / 2;
    }
}