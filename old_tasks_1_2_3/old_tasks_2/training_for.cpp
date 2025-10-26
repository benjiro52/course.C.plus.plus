#include <iostream>

using namespace std;

int main()
{
    for (int number = 1000; number <= 9999; number++) {
        int thousands = number / 1000;
        int hundreds = (number / 100) % 10;
        int tens = (number / 10) % 10;
        int units = number % 10;

        if ((thousands + units) == (hundreds + tens)) {
            cout << number << " ";
        }
    }

    return 0;
}
