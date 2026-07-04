#include <bits/stdc++.h>
using namespace std;

class point {
private:
    int x;
    int y;
public:
    void setCoordinates(int newX, int newY) {
        x = newX;
        y = newY;
    }

    void printPoint() {
        cout << "(" << x << "," << y << ")";
    }

    double distanceToOrigin() {
        double res = sqrt(x * x + y * y);
        return res;
    }
};

int main() {
    point p;
    p.setCoordinates(3, 4);
    p.printPoint();

    double dist = p.distanceToOrigin();
    cout << endl << dist;

    return 0;
}