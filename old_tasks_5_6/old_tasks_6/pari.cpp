#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;

    int ant1 = a * b + c * d;
    int ant2 = a * c + b * d;
    int ant3 = a * d + b * c;

    int final_ant = max({ant1, ant2, ant3});
    
    cout << final_ant;

    return 0;
}