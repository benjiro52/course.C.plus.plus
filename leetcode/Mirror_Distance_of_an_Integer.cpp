#include <bits/stdc++.h>
using namespace std;

int main() {
    int n = 7;

    string s = to_string(n);
    reverse(s.begin(), s.end());

    int n2 = stoi(s);
    cout << abs(n2 - n);
}