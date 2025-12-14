#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;

    long long ant = a + n;

    if (a > 0 && ant <= 0) {
        ant --;
    } else if (a < 0 && ant >= 0) ant++;
    cout << ant;
}