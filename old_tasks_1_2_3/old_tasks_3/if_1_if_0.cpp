#include <iostream>

using namespace std;

int main()
{
    int number1, number2, a;
    cin >> number1 >> number2 >> a;

    if (a == 0) {
        cout << min(number1, number2);
    } else {
        cout << max(number1, number2);
    }

    return 0;
}