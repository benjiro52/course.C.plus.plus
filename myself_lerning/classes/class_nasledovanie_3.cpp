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

    void accelarate(int amount) {
        speed += amount;
    }
    void printStatus() {
        cout << "Brand: " << brand << ", Speed: " << speed << endl;
    }
};

class Car : public Vehicle {
private:
    int numDoors = 4;
public:
    Car (int doors) : Vehicle(brand) {
        numDoors = doors;
    } 
};

int main() {

}