#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;
    cin >> a >> b >> c >> d >> e;

    long long box1 = a * a * a;
    long long box2 = b * b * b;
    long long box3 = c * c * c;
    long long box4 = d * d * d;
    long long package = e * e * e;

    long long all = box1 + box2 + box3 + box4;

    if (package >= all) {
        cout << "1";
    } else {
        int ant = 0;
        long long remaining = all;

        if (box4 <= package) {
            ant++;
            remaining -= box4;
        } else {
            ant += (box4 / package);
            if (box4 % package != 0) {
                ant++;
            }
            remaining -= box4;
        }

        if (box3 <= package) {
            ant++;
            remaining -= box3;
        } else {
            ant += (box3 / package);
            if (box3 % package != 0) {
                ant++;
            }
            remaining -= box3;
        }

        if (box2 <= package) {
            ant++;
            remaining -= box2;
        } else {
            ant += (box2 / package);
            if (box2 % package != 0) {
                ant++;
            }
            remaining -= box2;
        }

        if (box1 <= package) {
            ant++;
            remaining -= box1;
        } else {
            ant += (box1 / package);
            if (box1 % package != 0) {
                ant++;
            }
            remaining -= box1;
        }

        cout << ant;
    }

    return 0;
}