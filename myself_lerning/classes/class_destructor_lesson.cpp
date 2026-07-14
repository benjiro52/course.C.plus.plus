#include <bits/stdc++.h>
using namespace std;

class Dog {
public:
    string name;

    Dog(string n) {          // конструктор
        name = n;
        cout << name << " created!" << endl;
    }

    ~Dog() {                 // деструктор — имя класса с ~ впереди
        cout << name << " destroyed!" << endl;
    }
};

int main() {
    cout << "Start" << endl;
    Dog myDog("Rex");   // конструктор вызывается тут
    cout << "Middle" << endl;
}// а тут, при выходе из main(), объект myDog уничтожается — вызывается деструктор