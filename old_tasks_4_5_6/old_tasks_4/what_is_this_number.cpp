#include <iostream>

using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a > b) swap(a, b);
    if (b > c) swap(b, c);
    if (a > b) swap(a, b);

    int r1 = b - a;
    int r2 = c - b;
    // int ant1 = a - r1;
    // int ant2 = c + r1;
    // int ant3 = b + r1;
    // int ant4 = b - r2;

    if (r1 == r2) {
        if (a - r1 <= 0) {
            cout << c + r1;
            return 0;
        }
        cout << a - r1 << " " << c + r1;
    } else if (r1 < r2) {
        cout << b + r1;
    } else {
        cout << b - r2;
    }

    return 0;
}
