#include <iostream>

using namespace std;

int main() 
{
    int W;
    cin >> W;

    if (W % 2 == 0 && W >= 4) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}