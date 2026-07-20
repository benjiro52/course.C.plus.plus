#include <bits/stdc++.h>
using namespace std;

class Point {
public:
    int x, y;

    Point(int x_, int y_) {
        x = x_;
        y = y_;
    }

    Point(const Point &other) {
        x = other.x;
        y = other.y;
    }

};

class Buffer {
public:
    int* data;
    int size;

    Buffer(int size_) {
        size = size_;
        data = new int[size]; // выделили память вречную 
    }

    Buffer(const Buffer &other) {
        size = other.size;
        data = new int[size]; // выделяем СВОЮ, отдельную память
        for (int i = 0; i < size; i++) {
            data[i] = other.data[i];    // копируем сами значения, а не адрес
        }
    }

    ~Buffer() {
        delete[] data; // освобождаем свою память
    }
};

int main() {
    Point p_a(10, 11);
    Point p_b(p_a);

    Buffer b_a(5);
    Buffer b_b = b_a;  
}