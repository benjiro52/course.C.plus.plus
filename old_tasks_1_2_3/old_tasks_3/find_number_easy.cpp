#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int number = n; number >= n; number ++) {
        if (number % 2 == 0 && number % n == 0) {
            cout << number;
            return 0;
        }
    }
}