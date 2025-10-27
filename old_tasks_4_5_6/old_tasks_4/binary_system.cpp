#include <iostream>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    long long number1, number2, ant = 0;;
    cin >> number1 >> number2;

    for (long long number = number1; number <= number2; number++) {
        long long b = number;
        long long binar1 = b % 2;
        b /= 2;

        int group = 1;
        while (b >= 1) {
            long long binar = b % 2;
            b /= 2;
            if (binar != binar1) {
                group ++;
                binar1 = binar;
            }
        }

        if (group == 3) {
            ant ++;
        }
    }

    cout << ant;

    return 0;
}