#include <iostream>

using namespace std;

int main()
{
    long long n, k = 0;
    cin >> n;

    if (n == 0) {
        cout << "1";
        return 0;
    }

    while (n > 0)
    {
        k ++;
        n /= 10;
    }
   
    cout << k;

    return 0;
}