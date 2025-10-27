#include <iostream>

using namespace std;

int main()
{
    int month0, day0;
    cin >> month0 >> day0;

    int days[4] = {30, 31, 30, 31};

    while (month0 <= 12) {
        cout << month0 << " " << day0 << endl;
        day0 += 7;
        if (day0 > days[month0 - 9]) {
            day0 -= days[month0 - 9];
            month0++;
        }
    }

    return 0;
}