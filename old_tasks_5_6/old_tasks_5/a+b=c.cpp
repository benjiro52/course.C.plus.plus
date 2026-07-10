#include <iostream>

using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    for (int a2 = 0; a2 <= 9; a2++) {
        for (int b2 = 0; b2 <= 9; b2++) {
            if (a2 + b2 == c) {
                cout << "Yes";
                return 0;
            }
        }
    }

    cout << "No";

    return 0;
}