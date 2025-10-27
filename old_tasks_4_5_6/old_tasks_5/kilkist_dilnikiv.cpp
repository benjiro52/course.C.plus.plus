#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;

    long long a = 0; 
    for (long long i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            a++; 
            if (i != n / i) {
                a++; 
            }
        }
    }

    cout << a;
    return 0;
}