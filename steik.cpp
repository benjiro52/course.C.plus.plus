#include <bits/stdc++.h>
using namespace std;

int main() {
    long long k, ant = 0;
    cin >> k;

    long long group = (k - 1) / 5; 
    long long base = 30 * (group + 1); 
    long long a = group * 5;

    ant += 5 * 30 * group * (group + 1) / 2;
    ant += (k - a) * base;

    cout << ant;
}