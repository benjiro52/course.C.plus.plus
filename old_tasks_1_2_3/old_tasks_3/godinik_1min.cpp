#include <iostream>

using namespace std;

int main() 
{
    int hours, minutes;
    cin >> hours >> minutes;

    if (hours > 24) {
        cout << "not possible";
        return 0;
    }
    if (minutes > 60) {
        cout << "not possible";
        return 0;
    }

    minutes = minutes + 1;

    if (minutes == 60) {
        minutes = 0;
        hours = hours + 1;
    }

    if (hours == 24) {
        hours = 0;
    }

    cout << hours << " " << minutes;

    return 0;
}
