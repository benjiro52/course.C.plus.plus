#include <iostream>
using namespace std;

int main() 
{
    long long n, one = 1;
    cin >> n;

    long long ant = 0;

    for (long long i = n; i >= max(one, n - 100); i--) {
        long long x = i;
        long long a = 1;
        while (x > 0) {
            a *= x % 10;
            x /= 10;
        }
        if (a > ant)
            ant = a;
    }

    cout << ant;
}
