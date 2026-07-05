#include <bits/stdc++.h>
using namespace std;

class coffeeGrinder {
private:
    bool checkVoltage() {
        return true;
    }
public:
    void start() {
        if (checkVoltage()) {
            cout << "vjuuuh" << endl;
        } else  {
            cout << "beep beep";
        }
    }

};

int main() {
    coffeeGrinder cof;
    cof.start();
}