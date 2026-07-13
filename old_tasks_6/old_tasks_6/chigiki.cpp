#include <iostream>
using namespace std;

int main() {
    long long x, y, z;
    cin >> x >> y >> z;

    if (x % z == 0 || y % z == 0 || (x + y) / z == x / z + y / z) {
        cout << x / z + y / z << " 0";
    } else {
        long long ost_x = z - x % z;
        long long ost_y = z - y % z;

        if (ost_x <= y && ost_y <= x) {
            if (ost_x < ost_y)
                cout << (x + ost_x) / z + (y - ost_x) / z << " " << ost_x;
            else
                cout << (x - ost_y) / z + (y + ost_y) / z << " " << ost_y;
        } else if (ost_x <= y) {
            cout << (x + ost_x) / z + (y - ost_x) / z << " " << ost_x;
        } else if (ost_y <= x) {
            cout << (x - ost_y) / z + (y + ost_y) / z << " " << ost_y;
        }
    }

    return 0;
}
