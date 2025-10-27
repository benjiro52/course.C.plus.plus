#include <iostream>

using namespace std;

int main()
{
    int items;
    long long mx, r = 0, ch = 0;
    cin >> mx >> items;

    for (int i = 0; i < items; i++) {
        int a;
        cin >> a;
        if (r + a <= mx) {
            r += a;
        } else {
            ch += a;
        }
    }

    cout << r << endl << ch;

    return 0;
}