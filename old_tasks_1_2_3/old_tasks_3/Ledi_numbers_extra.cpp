#include <iostream>

using namespace std;

int main() 
{
    int a, b, c, x;
    cin >> a >> b >> c >> x;


    if (a > b) swap(a,b);
    if (b > c) swap(b,c);
    if (a > b) swap(a,b);
    int number1 = a * 100 + b * 10 + c;
    int number2 = a * 100 + c * 10 + b;
    int number3 = b * 100 + a * 10 + c;
    int number4 = b * 100 + c * 10 + a;
    int number5 = c * 100 + a * 10 + b;
    int number6 = c * 100 + b * 10 + a;
   

    if (x == number1) cout << 1;
    else if (x == number2) cout << 2;
    else if (x == number3) cout << 3;
    else if (x == number4) cout << 4;
    else if (x == number5) cout << 5;
    else if (x == number6) cout << 6;

    return 0;
}
