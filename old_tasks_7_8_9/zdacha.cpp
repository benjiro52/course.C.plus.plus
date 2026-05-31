#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int paid = c * 100 + d;
    int cost = a * 100 + b;
    int change = paid - cost;
    
    cout << change / 100 << " " << change % 100;
    return 0;
}