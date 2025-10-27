#include <iostream>

using namespace std;

int main()
{
    long  number, b;
    cin >> number;

    if (number == 1) {
        cout << "2";
        return 0;
    }
    
    for (long i = 2; i <= number; i++) {
        long qout = number / i;
        long ost = number % i;

        while (qout > i) {
            long ant = qout % i;
            if (ant != ost) {
                qout = 0;
            } else {
                qout /= i;
            }
        }

        if (qout != 0) {
            cout << i;
            return 0;
        }
    }

    return 0;
}
