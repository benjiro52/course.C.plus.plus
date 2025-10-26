#include <iostream>

using namespace std;

int main()
{
    long long a, b, c;
    cin >> a >> b >> c;

    long long length_per_level = 2 * b + 3 * a;
    long long max_height = c / length_per_level;

    cout << max_height;

    return 0;
}