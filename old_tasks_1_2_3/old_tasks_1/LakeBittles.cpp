#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    if (n % k != 0) {
        cout << n / k + k;
    }
    else {
        cout << n / k + k - 1;
    }
    
    return 0;
}