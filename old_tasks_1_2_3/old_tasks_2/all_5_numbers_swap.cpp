#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int number = 10000; number <= 99999; number ++) {
        int a, b, c, d, e;

        a = number / 10000 % 10;
        b = number / 1000 % 10;
        c = number / 100 % 10;
        d = number / 10 % 10;
        e = number % 10;
        
        swap(a, e);
        swap(b, d);
        cout << a << b << c << d << e << " ";
    }
}