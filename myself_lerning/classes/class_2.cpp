#include <bits/stdc++.h>
using namespace std;

class rectangle {
private:
    int width;
    int height;
public:
    void setSize(int w, int h) {
        width = w;
        height = h;
    }

    int getArea() {
        return width * height;
    }

    int getPerimeter() {
        return 2 * (width + height);
    }

    bool isSqare() {
        if (width == height) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    rectangle rec;
    rec.setSize(6, 7);
    cout << "Area: " << rec.getArea() << endl;
    cout << "Perimnetr: " << rec.getPerimeter() << endl;
    cout << "Sqare: " << rec.isSqare();

    return 0;
}