#include <iostream>

using namespace std;

int main()
{
    int k, m, n;
    cin >> k >> m >> n;

    int time_needed = max(k, m) * n;
    cout << time_needed;

    return 0;
}