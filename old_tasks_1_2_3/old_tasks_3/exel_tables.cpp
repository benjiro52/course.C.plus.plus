#include <iostream>

using namespace std;

int main() 
{
    int a, b, n;
    cin >> a >> b >> n;
    cout << a << " " << b << " ";
    int prog = b - a;

    for (int i = 3; i <= n; i ++) {
        b = b + prog;
        cout << b << " ";
    }
}