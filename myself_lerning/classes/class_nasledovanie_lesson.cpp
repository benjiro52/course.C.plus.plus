#include <bits/stdc++.h>
using namespace std;

class Animal {
public:
    string name;

    Animal(string n) {
        name = n;
    }

    void makeSound() {
        cout << name << " makes a sound" << endl;
    }
};

class Dog : public Animal {   // Dog наследует от Animal
public:
    Dog(string n) : Animal(n) {}  // передаём имя в конструктор родителя
};

int main() {
    Dog d("Rex");
    d.makeSound();   // унаследовано от Animal: "Rex makes a sound"
}
