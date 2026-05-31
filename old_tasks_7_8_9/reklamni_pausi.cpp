#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, n;
    cin >> a >> b >> n;

    int commercials = (n - 1) / a;
    int ant = n + commercials * b;
    
    cout << ant;
    return 0;
}   