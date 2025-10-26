#include <iostream>

using namespace std;

int main() 
{
    int N;
    cin >> N;

    int sum = 0;
    int i = 1;

    while (i <= N) {
        if (N % i == 0) {
            sum += i;
        }
        i++;
    }

    cout << sum;

    return 0;
}
