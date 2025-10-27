#include <iostream>
using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;

    long long pos = n;
    long long time = 0;

    while (pos > 1 && m > 0) {
        long long wait = min(m, pos - 1); 
        time += wait;
        pos -= wait;
        if (pos == 1) break; 

        long long move = pos / 2;
        if (pos - move < pos) {
            pos = pos - move;
        }

    }
    time += pos;

    cout << time;
    return 0;
}