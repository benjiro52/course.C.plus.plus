#include <iostream>

using namespace std;

int main() 
{
    long long n, k;
    cin >> n >> k;

    for (long long i = 1; i <= k; i++) {
        if (n >= i) {
            n -= i; 
        } else {
            n += i; 
        }
    }

    cout << n;
    return 0;
}