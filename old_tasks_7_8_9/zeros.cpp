#include <bits/stdc++.h>
using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long ones = (b / 10 - (a - 1) / 10) - (b / 100 - (a - 1) / 100);
    long long twos = (b / 100 - (a - 1) / 100) - (b / 1000 - (a - 1) / 1000);
    long long threes = (b / 1000 - (a - 1) / 1000) - (b / 10000 - (a - 1) / 10000);

    cout << ones << endl;
    cout << twos << endl;
    cout << threes;
    
    return 0;
}   