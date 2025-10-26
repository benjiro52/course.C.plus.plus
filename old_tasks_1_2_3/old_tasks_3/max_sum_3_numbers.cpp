#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, k;
    int ant;
    cin >> a >> b >> c >> k;

    for (int i = 0; i < k; i ++) {
        if (a >= b && a >= c) a *= 2;
            else if (b >= a && b >= c) b *= 2;
                else c *= 2;
    }
    ant = a + b + c;

    cout << ant;
}