#include <iostream>

using namespace std;

int main() 
{
    long long n, x;
    cin >> n >> x;

    int count = 0;

    for (long long k = 2; k < n; ++k) {
        long long cycle_length = 2 * k - 2;
        long long position_in_cycle = (n - 1) % cycle_length + 1;

        if (position_in_cycle <= k) {
            if (position_in_cycle == x) {
                count++;
            }
        } else {
            if (2 * k - position_in_cycle == x) {
                count++;
            }
        }
    }

    cout << count << endl;

    return 0;
}