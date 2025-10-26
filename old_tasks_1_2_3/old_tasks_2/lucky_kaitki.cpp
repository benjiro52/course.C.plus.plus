#include <iostream>

using namespace std;

int main()
{
    for (int number = 100000; number <= 999999; number ++) {
        int a = number / 100000 % 10;
        int b = number / 10000 % 10;
        int c = number / 1000 % 10;
        int d = number / 100 % 10;
        int e = number / 10 % 10;
        int f = number % 10;

        if (a + b + c == d + e + f) {
            cout << number << " ";
        }
    }
}