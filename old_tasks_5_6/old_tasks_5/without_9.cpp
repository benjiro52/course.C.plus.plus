#include <iostream>

using namespace std;

int main() 
{
    // ios_base::sync_with_stdio(0);
    // cin.tie(0);
    // cout.tie(0);
    long long l, r;
    cin >> l >> r;

    long long ant = 0;

    for (long long i = l; i <= r; i++) {
        long long num = i;
        int nine = 0;

        while (num > 0 && nine != 1) {
            if (num % 10 == 9) {
                nine = 1; 
            }
            num /= 10;
        }

        if (nine == 0) {
            ant++;
        }
    }

    cout << ant;
    
    return 0;
}