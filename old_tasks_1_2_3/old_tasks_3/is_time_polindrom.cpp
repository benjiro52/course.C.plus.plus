#include <iostream>

using namespace std;

int main() 
{
    int a, b, c;
    cin >> a >> b >> c;

    int sec = a * 3600 + b * 60 + c;

    if (sec / 1000 == sec % 10 && sec % 1000 / 100 == sec % 1000 % 100 / 10) {
        cout << "yes";
    } else {
        cout << "no";
    }

    return 0;
}
