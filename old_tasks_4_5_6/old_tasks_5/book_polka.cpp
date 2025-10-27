#include <iostream>

using namespace std;

int main() 
{
    int h, r;
    cin >> h >> r;

    int a = h / 2;
    int books = (r + a - 1) / a;

    cout << books - 1;

    return 0;
}