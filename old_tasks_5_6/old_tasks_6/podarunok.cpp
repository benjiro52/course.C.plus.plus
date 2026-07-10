#include <iostream>
using namespace std;

int main() {
    int a, b;
    cin >> a >> b;

    int x1 = a / 1000, x2 = (a / 100) % 10, x3 = (a / 10) % 10, x4 = a % 10;
    int y1 = b / 1000, y2 = (b / 100) % 10, y3 = (b / 10) % 10, y4 = b % 10;

    int first = 0, second = 0;
    if (x1 < x2 && x2 < x3 && x3 < x4) first = 1;
    if (y1 < y2 && y2 < y3 && y3 < y4) second = 1;

    if (first && second)
        cout << "Both";
    else if (first)
        cout << "First";
    else if (second)
        cout << "Second";
    else
        cout << "None";

    return 0;
}