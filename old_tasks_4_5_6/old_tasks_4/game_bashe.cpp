#include <iostream>

using namespace std;

int main() 
{
    short n;
    cin >> n;

    if (n % 4 == 0) {
        cout << 0; 
    } else {
        cout << n % 4; 
    }

    return 0;
}
