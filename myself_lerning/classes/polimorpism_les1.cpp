#include <bits/stdc++.h>
using namespace std;

class Gun {
public:
    virtual void Shoot () {
        cout << "Bang" << endl;
    }
};

class SubmachineGun : public Gun {
public:
    void Shoot() {
        cout << "Bang Bang Bang" << endl;
    }
};

int main() {
    Gun gn;
    SubmachineGun sgn;
    
    gn.Shoot();
    sgn.Shoot();
}