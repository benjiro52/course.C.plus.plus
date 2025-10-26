#include <iostream>

using namespace std;

int main() 
{
    int number = 1000;

    while (number <= 9999) {
        int thousands = number / 1000;
        int hundreds = (number / 100) % 10;
        int tens = (number / 10) % 10;
        int units = number % 10;

        if ((thousands + units) == (hundreds + tens)) {
            cout << number;
        }

        number++;
    }

    return 0;
}
