#include <iostream>

using namespace std;

int main()
{
    short old, neu;
    cin >> old >> neu;

    int ant = old + neu;

    if (ant >= 12) {
        ant %= 12;
    }

    if (ant == 0) {
        cout << "12";
        return 0;
    }

    cout << ant;

    return 0;
}