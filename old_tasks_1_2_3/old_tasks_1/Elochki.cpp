#include <iostream>

using namespace std;

int main()
{
    long long n;
    long long area;
    cin >> n;

    area = (2 * n + 1) + (n * (n + 1));

    cout << area;

    return 0;
}