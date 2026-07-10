#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;

    for (int i = 0; i < k; i++) {
        if (a >= b && a >= c) {
            a *= 2;
        } else if (b >= a && b >= c) {
            b *= 2;
        } else {
            c *= 2;
        }
    }

    int ant = a + b + c;

    cout << ant;

    return 0;
}