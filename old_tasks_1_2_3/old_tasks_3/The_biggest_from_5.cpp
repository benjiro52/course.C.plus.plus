#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    int i = 0;
    int mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    if (d > mx) mx = d;
    if (e > mx) mx = e;
    
    if (mx == b) i ++;
    if (mx == c) i ++;
    if (mx == d) i ++;
    if (mx == e) i ++;

    cout << mx << endl;
    cout << i;
}