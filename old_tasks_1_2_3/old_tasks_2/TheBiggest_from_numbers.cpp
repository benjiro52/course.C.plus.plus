#include <iostream>

using namespace std;

int main()
{
    int number;
    cin >> number;

    int a = number / 100;          
    int b = number / 10 % 10;    
    int c = number % 10;           
 
    if (a > b) {
        swap(a, b);
    }
    if (a > c) {
        swap(a, c);
    }
    if (b > c) {
        swap(b, c);
    }

    int maximum = a * 100 + b * 10 + c;

    cout << maximum;

    return 0;
}
