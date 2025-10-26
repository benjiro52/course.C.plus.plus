#include <iostream>

using namespace std;

int main()
{
    long long a, b, c;
    long long s, v;
    cin >> a >> b >> c;

    s = 2 * (a * b + a * c + c * b);
    v = a * b * c;

    cout << s << " " << v;
}