#include <iostream>

using namespace std;

int main()
{
    int number, a = 1;
    cin >> number;

    while (a <= number) {
        if (number % a == 0) {
            cout << a << " ";
        }
        a ++;
    }
}