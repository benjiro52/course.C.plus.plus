#include <iostream>

using namespace std;

int main() 
{
    long long n, k;
    cin >> n >> k;

    if (k % 2 == 1) {
        cout << (k + 1) / 2;
    } else {
        cout << (n + 1) / 2 + k / 2;
    }

    return 0;
}
