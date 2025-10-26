#include <iostream>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long rectangles;
    rectangles = (n * (n + 1) / 2) * (m * (m + 1) / 2);

    cout << rectangles;

    return 0;
}