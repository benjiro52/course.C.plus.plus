#include <iostream>

using namespace std;

int main()
{
    int hour, min, a, b;
    char q;
    cin >> hour >> q >> min >> a >> b;

    int sec = hour * 3600 + min * 60;
    int sec2 = a * 3600 + b * 60;

    int ant = sec + sec2;

    if (ant / 3600 % 24 < 10 && (ant % 3600) / 60 < 10) {
        cout << "0" << ant / 3600 << q << "0" << ant / 60;
    }
    if (ant / 3600 % 24 > 10 && (ant % 3600) / 60 < 10) {
        cout << ant / 3600 << q << "0" << ant / 60;
    }
    if (ant / 3600 % 24 < 10 && (ant % 3600) / 60 > 10) {
        cout << "0" << ant / 3600 << q << ant / 60;
    }
    if (ant / 3600 % 24 > 10 && (ant % 3600) / 60 > 10) {
        cout << ant / 3600 << q << ant / 60;
    }
}