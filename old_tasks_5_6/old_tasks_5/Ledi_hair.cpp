#include <iostream>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    int days = min(n, m);

    n -= days;
    m -= days;

    int same_days = (n / 2) + (m / 2);

    cout << days << " " << same_days;

    return 0;
}