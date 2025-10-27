#include <bits/stdc++.h>

using namespace std;

int main() 
{
    long long a, b;
    cin >> a >> b;

    long long ant = (a + b - 1) - (abs(a - b) + 1) + 1;
    cout << ant;

    return 0;
}
