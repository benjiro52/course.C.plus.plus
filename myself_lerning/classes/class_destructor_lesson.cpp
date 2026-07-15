#include <bits/stdc++.h>
using namespace std;

class myClass {
public:
    int* data;

    myClass(int size) {
        this-> data = new int[size];

        for (int i = 0; i < size; i++) {
            data[i] = i;
        }
        cout << "Started konstruktor" << this << endl;
    }
    myClass(const myClass &other) {
        this-> data = other.data;
        cout << "Started konstruktor copie" << this << endl;
    }

    ~myClass() {
        cout << "Ended konstruktor" << this << endl;
        delete[] data;
    }
};



int main() {
    myClass mc(10);
    myClass mc2(mc);

    return 0;
}