#include <iostream>

using namespace std;

int main()
{
    int number, a, b, c, d, min_number, max_number;
    cin >> number;

    a = number / 1000;
    b = (number % 1000) / 100;
    c = (number % 100) / 10;
    d = number % 10;

    if (a<b) swap (a,b);
    if (b<c) swap (b,c);
    if (c<d) swap (c,d);
    if (a<b) swap (a,b);
    if (b<c) swap (b,c);
    if (a<b) swap (a,b);
    if (d==0&&c==0&&b==0) {cout<<a<<b<<c<<d<<" "<<a<<b<<c<<d; return 0;}
    if (d==0&&c==0) {cout<<b<<c<<d<<a<<" "<<a<<b<<c<<d; return 0;}
    if (d==0) {cout<<c<<d<<b<<a<<" "<<a<<b<<c<<d; return 0;}
    cout<<d<<c<<b<<a<<" "<<a<<b<<c<<d;

    return 0;
}