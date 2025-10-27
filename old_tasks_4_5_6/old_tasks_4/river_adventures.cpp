#include <iostream>

using namespace std;

int main()
{
    int n, a, b, mid, ant_a = 0, ant_b = 0, riz1, riz;
    cin >> n >> a >> b;

    mid = 2;
    int ant_a1 = (mid - 1) * a;
    int ant_b1 = (n - mid) * b;
    riz1 = abs(max(ant_a1, ant_b1) - min(ant_a1, ant_b1));
    //cout << riz1 << endl;
    // if (n % 2 != 0) {
    //     if (a > b) {
    //         mid --;
    //     } else {
    //         mid ++;
    //     }
    // }

    
    while (mid < n) {
        ant_a = (mid - 1) * a;
        ant_b = (n - mid) * b;

        riz = abs(max(ant_a, ant_b) - min(ant_a, ant_b));
        if (riz1 < riz) {
            cout << mid - 1;
            return 0;
        }
        //cout << riz << endl;
        mid ++;
    }
    cout << mid;
}