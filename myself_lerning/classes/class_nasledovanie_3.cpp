#include <bits/stdc++.h>
using namespace std;

class Vehicle {
protected: // доступен наследникам!!!! sehr wichtig btw
    string brand;
    int speed = 0;
public:
    Vehicle(string brand_) {
        brand = brand_;
    }

    void accelerate(int amount) {
        speed += amount;
    }
    void printStatus() {
        cout << "Brand: " << brand << ", Speed: " << speed << endl;
    }
};

class Car : public Vehicle {
private:
    int numDoors;
public:
    Car (string brand_, int doors) : Vehicle(brand_) {
        numDoors = doors;
    } 
    void honk() {
        cout << "HONK HONK" << endl;
    }
};

class Bike : public Vehicle {
private:
    bool has_basket;
public:
    Bike (string brand_, bool has_basket_) : Vehicle (brand_) {
        has_basket = has_basket_;
    } 
    void ring_bell() {
        cout << "RING RING" << endl;
    }
};

int main() {
    Car cr("Mercedes", 4);
    cr.accelerate(100);
    cr.printStatus();
    cr.honk();

    Bike bk("Top", true);
    bk.ring_bell();
}