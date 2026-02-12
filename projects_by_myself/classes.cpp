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
    
int main() {
    car myCar;

    myCar.color = "black";
    myCar.speed = 200;
    
    myCar.showInfo();

}