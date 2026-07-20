#include <bits/stdc++.h>
using namespace std;

class Point {
public:
    int x;
    int y;

    Point(int x_, int y_) {
        x = x_;
        y = y_;
        cout << "Regular constructor called" << endl;
    }

    Point(const Point &other) {
        x = other.x;
        y = other.y;
        cout << "Copy constructor called" << endl;
    }

    void printPoint() {
        cout << "(" << x << ", " << y << ")" << endl;
    }
};

int main() {
    Point a(3, 4);
    Point b = a;
    b.x = 100;

    a.printPoint();  // (3, 4)
    b.printPoint();  // (100, 4)
    return 0;
}