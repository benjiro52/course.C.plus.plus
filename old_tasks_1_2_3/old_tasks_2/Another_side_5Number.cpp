#include <bits/stdc++.h>

using namespace std;

int main()
{
    int number, a, b, c, d, e, ant;
    cin >> number;

    a = number / 10000;
    b = number / 1000 % 10;
    c = number / 100 % 10 ;
    d = number / 10 % 10;
    e = number % 10;
    
    ant = e * 10000 + d * 1000 + c * 100 + b * 10 + a;
    cout << ant;
}