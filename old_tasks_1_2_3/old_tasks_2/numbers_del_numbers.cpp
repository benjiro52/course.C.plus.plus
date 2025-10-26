#include <bits/stdc++.h>

using namespace std;

int main()
{
    for (int number = 1000; number < 9999; number ++) {
        int a = number / 1000 % 10;
        int b = number / 100 % 10;
        int c = number / 10 % 10;
        int d = number % 10;
        if (a == 0) {
            a ++;
        }
        if (b == 0) {
            b ++;
        }
        if (c == 0) {
            c ++;
        }
        if (d == 0) {
            d ++;
        }

        if (number % a == 0 && number % b == 0 && number % c == 0 && number % d == 0) {
            cout << number << " ";
        } 
    }

    return 0;
}