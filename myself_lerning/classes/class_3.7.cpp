#include <bits/stdc++.h>
using namespace std;

class car {
private:
    string brand;
    string model;
    int speed;

public:
    car(string br, string md) {
        brand = br;
        model = md;
        speed = 0;
    }

    int accelerate(int amount) {
        return speed += amount;
    }
    int brake(int amount) {
        int newSpeed = speed - amount;   
        if (newSpeed < 0) {
            speed = 0;                   
        } else {
            speed = newSpeed;
        }
        return speed;
    }
    
    void printSatus() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Speed: " << speed << endl;
    }
};

int main() {
    car myCar("Mercedes", "Benz");
}