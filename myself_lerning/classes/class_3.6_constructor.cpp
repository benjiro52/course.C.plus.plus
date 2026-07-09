#include <bits/stdc++.h>
using namespace std;

class circle {
private:
    double radius;
public:
    circle(double rad) {
        radius = rad;
    }

    double getArea() {
        return 3.14 * radius * radius;
    }
    double getCircumference() {
        return 3.14 * 2 * radius;
    }
};

int main() {
    circle c(67);
    cout << "Area: " << c.getArea() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;

}