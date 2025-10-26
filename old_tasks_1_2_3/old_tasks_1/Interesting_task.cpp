#include <iostream>

using namespace std;

int main() 
{
    int X;
    cin >> X;

    int modified_X = X + 10;

    int last_digit = modified_X % 10;

    modified_X /= 10;

    int N;
    for (N = last_digit; N <= 99; N += 10) {
        int sum_of_digits = (N / 10) + (N % 10);
        if ((N - sum_of_digits) / 9 + 1 == modified_X) {
            return 0;
        }
    }

    cout << N;
    return 0;
}
