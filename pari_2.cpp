#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    
    int opt1 = a*b + c*d;
    int opt2 = a*c + b*d;
    int opt3 = a*d + b*c;
    
    cout << max({opt1, opt2, opt3});
    return 0;
}