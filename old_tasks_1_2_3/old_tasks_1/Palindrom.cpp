#include <iostream>

using namespace std;

int main()
{
    long long a, b, i, n;
    cin >> a >> b;

    i = a;
    n = 0;
    while (i <= b) {
        if (i / 100 ==  i % 10 % 10) {
            n ++;
        }
        i ++;
    }

    cout << n;

    return 0;

}