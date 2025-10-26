#include <iostream>

using namespace std;

int main()
{
    int password, number1, number2, number3, number4, number5, number6, number7, sum_number;
    cin >> password;

    number1 = password / 1000000;
    number2 = password / 100000 % 10;
    number3 = password / 10000 % 100 % 10;
    number4 = password / 1000 % 1000 % 100 % 10;
    number5 = password / 100 % 10000 % 1000 % 100 % 10;
    number6 = password / 10 % 100000 % 10000 % 1000 % 100 % 10;
    number7 = password % 1000000 % 100000 % 10000 % 1000 % 100 % 10;

    sum_number = number1 * 2 + number2 * 7 + number3 * 6 + number4 * 5 + number5 * 4 + number6 * 3 + number7 * 2;
    if (sum_number % 11 == 0) {
        cout << "J";
    }
    if (sum_number % 11 == 1) {
        cout << "A";
    }
    if (sum_number % 11 == 2) {
        cout << "B";
    }
    if (sum_number % 11 == 3) {
        cout << "C";
    }
    if (sum_number % 11 == 4) {
        cout << "D";
    }
    if (sum_number % 11 == 5) {
        cout << "E";
    }
    if (sum_number % 11 == 6) {
        cout << "F";
    }
    if (sum_number % 11 == 7) {
        cout << "G";
    }
    if (sum_number % 11 == 8) {
        cout << "H";
    }
    if (sum_number % 11 == 9) {
        cout << "I";
    }
    if (sum_number % 11 == 10) {
        cout << "Z";
    }

    return 0;
}