#include <iostream>
using namespace std;

int main() 
{
    int n, a = 0, b = 0;
    cin >> n;

    b = n / 3;

    if (n % 3 == 1) {
        b--; 
        a += 2;
    } else 
        if (n % 3 == 2) {
        a++; 
    }

    if (a > 0) {
        cout << "2" << " " << a << " ";
    }
    if (b > 0) {
        cout << "3 " << b;
    }
    
    return 0;
}