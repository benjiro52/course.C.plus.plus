#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    int a = 0;
    cin >> x;

    string pol = to_string(x);
    string rev = pol;
    reverse(rev.begin(), rev.end());
    return pol == rev;
}