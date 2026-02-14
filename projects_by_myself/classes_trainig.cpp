#include <bits/stdc++.h>
using namespace std;


class car {
public:
    string color;
    int speed;

    void showInfo () {
        cout << "Color: " << color << endl << "Speed: " << speed;
    }
};

class mustang {
public: 
    int speed;
    int price;

    void showInfoMustang() {
        cout << speed << " " << price;
    }
};
    
int main() {
    car myCar;
    myCar.color = "black";
    myCar.speed = 200;
    myCar.showInfo();
    cout << endl;

    mustang mus;
    mus.speed = 300;
    mus.price = 80000;
    mus.showInfoMustang();
}