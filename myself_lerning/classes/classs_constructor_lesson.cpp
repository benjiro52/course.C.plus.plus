#include <bits/stdc++.h>
using namespace std;

class point {
private:
    int x;
    int y;
public:
    point() {
        x = 0;
        y = 0;
    }
    point(int valueX, int valueY) {
        x = valueX;
        y = valueY;
    }
    point(int valueX, bool boolean) {
        x = valueX;

        if (boolean) {
            y = 1;
        } else {
            y = -1;
        }
    }

    void print() {
        cout << x << " " << y << endl;
    }
};

int main() {
    point a;
    a.print();
    point b(5,14);
    b.print();
    point c(22, true);
    c.print();

}