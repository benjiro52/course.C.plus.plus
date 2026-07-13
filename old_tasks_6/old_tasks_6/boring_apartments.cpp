#include <iostream>
using namespace std;

int main() 
{
    long long n, k;
    cin >> n >> k;

    int ant = 0;

    for (int d = 1; d <= 9; d++) {
        long long j = d;
        while (j <= n) {
            ant++;
            if (j == k) {
                cout << ant;
                return 0;
            }
            j = j * 10 + d;
        }
    }

    return 0;
}
