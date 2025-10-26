#include <bits/stdc++.h>
#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int mx = a;
    if (b > mx) mx = b;
    if (c > mx) mx = c;
    if (d > mx) mx = d;
    
    int mn = a;
    if (b < mn) mn = b;
    if (c < mn) mn = c;
    if (d < mn) mn = d;

    cout << mx << endl;
    cout << mn;
}