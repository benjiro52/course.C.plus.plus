#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    for (int i = 1; i < 10000; i++) {
        if (i % 2 == 0) {
            if (i % number == 0) {
                cout << i;
                return 0;
            }
        }
    }
}