#include <iostream>

using namespace std;

int main()
{
    int month, k;
    cin >> month >> k;

    long long rabbits = 1;
    int i = 1;

    if (month == 0) {
        cout << "1";
        return 0;
    }

    while (i <= month) {
        rabbits *= 2;
        if (rabbits > k) {
            rabbits -= k;
        }
        i ++;
    }

    cout << rabbits;

    return 0;
}