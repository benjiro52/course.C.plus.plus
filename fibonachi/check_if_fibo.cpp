#include <bits/stdc++.h>
using namespace std;

int main() {
    long long number;
    long long a[100];
    cin >> number;

    long long variant1 = 5 * number * number + 4;
    long long variant2 = 5 * number * number - 4;
    long long check1 = sqrt(variant1);
    long long check2 = sqrt(variant2);

    bool check = (check1 * check1 == variant1) || (check2 * check2 == variant2);

    if (check) {
        cout << check << endl;

        long long a = 0, b = 1;
        long long ant = 1;

        while (b < number) {
            long long i = a + b;
            a = b;
            b = i;
            ant++;
        }
        cout << ant;
    } else {
        cout << check;
    }

    return 0;
}
