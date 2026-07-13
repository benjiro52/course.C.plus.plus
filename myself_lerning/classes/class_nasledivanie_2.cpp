#include <bits/stdc++.h>
using namespace std;

class shape {
public:
    string name;

    shape(string n) {
        name = n;
    }

    void printName() {
        cout << "Name: " << name;
    }
};

class triangle : public shape {
private:
    double base;
    double height;
public:
    triangle(double base_, double height_, string name) : shape(name) {
        base = base_;
        height = height_;
    }

    double getArea() {
        return 0.5 * base * height;
    }

};

int main() {
    triangle tr(10, 5, "Triangle");
    cout << tr.getArea();
    return 0;
}