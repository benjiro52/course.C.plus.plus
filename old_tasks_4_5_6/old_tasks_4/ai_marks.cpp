#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;

    if (n + n - 1 < m) {
        cout << "0";
        return 0;
    } else {
        int a = n / 2;
        int ant = m - a;

        if (n * (n + 1) / 2) {
            a--;
            ant++;
        }
        cout << a << endl << ant;
    }

    return 0;
}