#include <iostream>

using namespace std;

int main()
{
    long long start, seconds = 0, i = 0, a = 30;
    cin >> start;

    while (i < start) {
        seconds += a;
        i ++;
        if (i % 5 == 0) {
            a += 30;
        }
    }
    cout << seconds;

    return 0;

}