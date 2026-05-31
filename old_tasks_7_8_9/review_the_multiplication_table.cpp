#include <iostream>
using namespace std;

int main() {
    long long n, ant;
    cin >> n;

    int a = n % 6;

    if (a == 0) {
        a = 6;
    }

    if (a == 1) {
        ant = 5;
    }
    if (a == 2) {
        ant = 4;
    }
    if (a == 3) {
        ant = 6;
    }
    if (a == 4) {
        ant = 2;
    }
    if (a == 5) {
        ant = 3;
    }
    if (a == 6) {
        ant = 1;
    }

    cout << ant;

    return 0;
}