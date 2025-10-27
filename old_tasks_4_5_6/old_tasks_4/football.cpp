#include <bits/stdc++.h>

using namespace std;

int main()
{
    int f1[11];
    int f2[11];
    int n, x = 0, y = 0;

    for (int i = 0; i < 11; i ++) {
        cin >> f1[i];
    }

    for (int i = 0; i < 11; i ++) {
        cin >> f2[i];
    }

    cin >> n;
    int players[n];

    for (int i = 0; i < n; i ++) {
        cin >> players[i];
    }

    for (int i = 0; i < n; i ++) {
        for (int i2 = 0; i2 < 11; i2 ++) {
            if (f1[i2] == players[i]) {
                x ++;
            }
            if (f2[i2] == players[i]) {
                y ++;
            }
        }
    }
    //cout << "1" << endl;
    cout << x << ":" << y;

    return 0;
}