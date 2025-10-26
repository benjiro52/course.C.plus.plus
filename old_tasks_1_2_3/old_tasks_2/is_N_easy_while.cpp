#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int i = 2;
    int b = 0;

    while (i < n) {
        if (n % i == 0) {
            b ++;
        }
        i ++;

    }

    if (b == 0) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}