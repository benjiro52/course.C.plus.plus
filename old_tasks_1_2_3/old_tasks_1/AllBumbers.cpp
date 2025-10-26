#include <iostream>

using namespace std;

int main()
{
    long long n, a = 0, b = 0, i = 1;
    cin >> n;

    while (i <= n) {
        a = a + i;
        if (a % 3 == 0) 
        b = b + 1;
        i = i + 1;
    }
    cout << b;
    return 0;
}