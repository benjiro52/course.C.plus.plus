#include <bits/stdc++.h>
using namespace std;

int main() {
    int x, y, z, m;
    cin >> x >> y >> z >> m;

    int wait_tram = (15 - m % 15) % 15;
    int wait_troll = (10 - m % 10) % 10;
    int wait_bus = (5 - m % 5) % 5;

    int time_tram = wait_tram + x;
    int time_troll = wait_troll + y;
    int time_bus = wait_bus + z;

    cout << min({time_tram, time_troll, time_bus});
    return 0;
}