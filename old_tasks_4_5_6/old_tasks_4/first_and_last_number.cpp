#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int last = n % 10;
    while (10 < n) {
        n /= 10;
    }
    cout << n + last;
    
    return 0;
}