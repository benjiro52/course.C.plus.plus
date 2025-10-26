#include <iostream>

using namespace std;

int main()
{
    unsigned short year;
    cin>>year;

    if ( (year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        cout << "12/09/";
    }
    else cout << "13/09/";

    if (year < 10) {
        cout << "000" << year;
        return 0;
    }
    if (year < 100) {
        cout << "00" << year;
        return 0;
    }
    if (year < 1000) {
        cout << "0" << year;
        return 0;
    }
    if (year < 10000) {
        cout << year;
        return 0;
    }
};
