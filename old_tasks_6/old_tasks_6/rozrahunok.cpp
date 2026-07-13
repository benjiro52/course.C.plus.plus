#include <iostream>
using namespace std;

int main()
{
    int c5, c10, c20, c50, a, used5 = 0, used10 = 0, used20 = 0, used50 = 0, all = 0;
    cin >> c5 >> c10 >> c20 >> c50 >> a;

    if (a >= 50) {
        int take = min(a / 50, c50);
        used50 = take;
        a -= take * 50;
        all += take;
    }
    if (a >= 20) {
        int take = min(a / 20, c20);
        used20 = take;
        a -= take * 20;
        all += take;
    }
    if (a >= 10) {
        int take = min(a / 10, c10);
        used10 = take;
        a -= take * 10;
        all += take;
    }
    if (a >= 5) {
        int take = min(a/ 5, c5);
        used5 = take;
        a -= take * 5;
        all += take;
    }
    if (a == 0) {
        cout << used5 << " " << used10 << " " << used20 << " " << used50 << " " << all << endl;
    } else {
        cout << -1;
    }

    return 0;
}