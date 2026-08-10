#include <bits/stdc++.h>
using namespace std;

class Character {
protected:
    string name;
    int hp;
    int MaxHp;
    int atack;
    int defence;
public:
    Character(string name_, int hp_, int atack_, int defence_) {
        name = name_;
        hp = hp_;
        atack = atack_;
        defence = defence_;
    }
    void printStatus() {
        cout << "Stats of " << name << endl;
        cout << "Hp: " << hp << endl;
        cout << "Atack: " << atack << endl;
        cout << "Defence: " << defence << endl;
    }

    void takeDamage(int damage_hp) {
        hp -= damage_hp;
        if (hp < 0) hp = 0;
        cout << name << " takes " << damage_hp << ". Hp left: " << hp << endl;
    }
    void atack(Character& target) {
        hp = hp - atack + defence;
        if (hp < 0) hp = 0;
    }
};

class Player : public Character {
protected:
    int exp;
    int level;
    int gold;
    vector<string> inventory;
public:
    Player(string name_) : Character(name_, 100, 10, 5) {
        exp = 0;
        level = 1;
        gold = 0;
    }
};

class Enemy : public Character {
protected:
    int expReward;
    int goldReward;
public:
    Enemy(string name_, int hp_, int atack_, int defence_, int expReward_, int goldReward_) : Character(name_, hp_, atack_, defence_) {
        expReward = expReward_;
        goldReward = goldReward_;
    }

    int getExpReward() {
        return expReward;
    }
    int getGoldReward() {
        return goldReward;
    }
};
// шляпа

int main() {
    string start_character_name;
    cout << "You are a wizard. What is your name?" << endl; cin >> start_character_name;
    Player player1("Wizard");

    Enemy goblin("Goblin", 30, 5, 2, 10, 15);
    goblin.printStatus();
    goblin.takeDamage(20);
}