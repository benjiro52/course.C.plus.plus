#include <iostream>
using namespace std;

int main() 
{
    long long n, h, m, p, q, all_minutes, days, rest_minutes, hours, minutes;
    cin >> n >> h >> m >> p >> q;

    all_minutes = h * 60 + m;
    long long start_time = all_minutes;

    while (n > 0) {
        if (all_minutes % 60 == 0 && all_minutes != start_time) {
            n += q;
        }
        n--;
        all_minutes += p;
    }

    days = all_minutes / (24 * 60);
    rest_minutes = all_minutes % (24 * 60);
    hours = rest_minutes / 60;
    minutes = rest_minutes % 60;

    cout << days << " " << hours << " " << minutes;

    return 0;
}
