#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t1, t2;
    cin >> t1 >> t2;
    
    long long g = __gcd(t1, t2);
    long long ant = t1 / g * t2; 
    
    cout << ant;
}