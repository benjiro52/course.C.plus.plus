#include <iostream>

using namespace std;

int main()
{
    int n, one = 0, two = 0, three = 0, four = 0, five = 0;
    cin >> n;

    for (int i = 0; i < n; i ++) {
        int x, y;
        cin >> x >> y;

        if (x > 0 && y > 0) {
            one ++;
        } else if (x < 0 && y > 0) {
            two ++;
        } else if (x < 0 && y < 0) {
            three ++;
        } else if (x > 0 && y < 0) {
            four ++;
        } else {
            five ++;
        }
    }
    cout << one << endl;
    cout << two << endl;
    cout << three << endl;
    cout << four << endl;
    cout << five << endl;
}