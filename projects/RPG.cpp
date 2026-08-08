#include <bits/stdc++.h>
using namespace std;

class Character {
protected:
    string name;
    int hp = 100;
    int MaxHp;
    int atack = 2;
    int defence = 10;
public:
    Character(string name_) {
        name = name_;
    }
    void printStatus() {
        cout << "Your stats:" << endl;
        cout << "Hp: " << hp << endl;
        cout << "Atack: " << atack << endl;
        cout << "Defence: " << defence << endl;
    }
};

class Player : public Character {
protected:
    int exp;
    int level;
    int gold;
    vector<string> inventory;
public:
    Player(string name_) : Character(name_) {
        exp = 0;
        level = 1;
        gold = 0;
    }
};

int main() {
    string start_character_name;
    cout << "You are a wizard. What is your name?" << endl; cin >> start_character_name;
    Player player1("Wizard");

}