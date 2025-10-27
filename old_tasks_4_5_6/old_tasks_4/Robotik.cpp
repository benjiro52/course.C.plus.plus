#include <iostream>

using namespace std;

int main() 
{
    long long a, b, c, ant;
    cin >> a >> b >> c;

    long long all = a + b + c;

    if (all % 3 != 0) {
        cout << -1;
        return 0;
    }

    long long end_stan = all / 3;

    if (a == end_stan && b == end_stan && c == end_stan) {
        cout << 0;
        return 0;
    }   
    long long a1, b1, c1, a2, b2, c2, zero = 0;
    a1 = max(zero, a - end_stan);
    b1 = max(zero, b - end_stan);
    c1 = max(zero, c - end_stan);
    a2 = max(zero, end_stan - a);
    b2 = max(zero, end_stan - b);
    c2 = max(zero, end_stan - c);

    ant = (max(a1, a2) + max(b1, b2) + max(c1, c2)) / 2;
    cout << ant;
    return 0;
}
