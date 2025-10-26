#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int number, a, b, c, d, suma;
    cin >> number;

    a = number / 1000 % 10;
    b = number / 100 % 10 ;
    c = number / 10 % 10;
    d = number % 10;
    
    
    suma = a + b + c + d;

    cout << suma;

    return 0;
}