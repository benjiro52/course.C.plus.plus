#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    int sum1 = 0;
    int s = 0;
    int b2 = 0;
    int i2 = 1;
    int i = 1;
    int b = 0;

    while (i <= n) {
        if (n % i == 0) b ++;
            i ++;
    }

    while (n>0)
    { 
        s+=n%10;
        n/=10;
    }

    while (i2 <= s) {
        if (s % i2 == 0) b2 ++;
           i2 ++;
    } 


    if (b == 2 && b2 == 2) {
        cout << "Yes";
    } else {
        cout << "No";
    }
}