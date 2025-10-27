#include <iostream>

using namespace std;

int main() 
{
    long long n, a = 0, b = 0, last = -1;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int j;
        cin >> j;
        b += (i + 1);
        if (j % 2 == 0) {
            last = i;
        }
        if (last != -1) {
            a += (last + 1);
        }
    }

    cout << a;

    return 0;
}