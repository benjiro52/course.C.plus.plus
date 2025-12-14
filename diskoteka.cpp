#include <bits/stdc++.h>
using namespace std;

int main() {
    int a, b, c, ant = 0;
    cin >> a >> b >> c;

    while (true) {
        if (a > 0) {
            a--; ant++; 
        } else {
            break;
        }

        if (b > 0) {
            b--; ant++; 
        } else {
            break;
        }

        if (c > 0) {
            c--; ant++; 
        } else {
            break;
        }

        if (b > 0) {
            b--; ant++; 
        } else {
            break;
        }
    }

    cout << ant;
    return 0;
}