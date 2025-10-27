#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    short a, b, c;
    cin >> a >> b >> c;

    if (c == 0) cout << min(a, b);
    if (c == 1) cout << max(a, b);

    return 0;
}