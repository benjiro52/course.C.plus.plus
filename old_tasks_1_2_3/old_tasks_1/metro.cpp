#include <iostream>

using namespace std;

int main()
{
    int a, b, n, m, ant1, ant2;
    cin >> a >> b >> n >> m;

    int min_time1 = n + a * (n - 1);
    int max_time1 = n + a * (n + 1);
    int min_time2 = m + b * (m - 1);
    int max_time2 = m + b * (m + 2);

    if (max_time1 > max_time2) {
        ant1 = max_time2;
    } else {
        ant1 = max_time1;
    }

    if (min_time1 > min_time2) {
        ant2 = min_time1;
    } else {
        ant2 = min_time2;
    }

    if (ant2 > ant1) {
        cout << "-1";
    } else {
        cout << ant2 << " " << ant1;
    }

    return 0;
}