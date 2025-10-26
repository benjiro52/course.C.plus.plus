#include <iostream>

using namespace std;

int main()
{
    int troom, tcond;
    string mode;
    cin >> troom >> tcond >> mode;

    if (mode == "freeze") {
        if (troom <= tcond) {
            cout << troom;
        } else {
            cout << tcond;
        }
    } else if (mode == "heat") {
        if (troom >= tcond) {
            cout << troom;
        } else {
            cout << tcond;
        }
    } else if (mode == "auto") {
        cout << tcond;
    } else if (mode == "fan") {
        cout << troom;
    }

    return 0;
}