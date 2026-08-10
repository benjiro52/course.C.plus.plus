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

class Player {
public:
    void Shoot(Gun *gn) {
        gn ->Shoot();
    }
};

int main() {
    Gun gn;
    SubmachineGun sgn;
    
    gn.Shoot();
    sgn.Shoot();

    Gun *weapon = &sgn;
    weapon ->Shoot();
    Gun *weapon2 = &gn;
    weapon2 ->Shoot();

    Player player;
    player.Shoot(&gn);
    player.Shoot(&sgn);
}