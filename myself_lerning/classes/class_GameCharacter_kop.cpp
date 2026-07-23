#include <bits/stdc++.h>
using namespace std;

class GameCharacter {
private:
    string name;
    int health;
    int level;
public:
    GameCharacter(string name_, int health_, int level_) {
        name = name_;
        health = health_;   
        level = level_;
    }

    GameCharacter(const GameCharacter &other) {
        name = other.name;
        health = other.health;
        level = other.level;
    }

    int takeDamage(int damage) {
        health -= damage;
        return health;
    }
    int levelUp() {
        level += 1;
        health += 20;
        return level, health;
    }
    void printStatus() {
        cout << "Name: " << name << " | Health: " << health << " | Level: " << level << endl;
    }


};

int main() {
    GameCharacter hero("Hero", 100, 1);
    GameCharacter clone = hero;
    vector<GameCharacter> team;

    clone.takeDamage(30);   
    clone.levelUp(); 
    
    hero.printStatus();
    clone.printStatus();

    for (int i = 0; i < 5; i++) {
        team.push_back(hero);
        team[i].printStatus();
    }
}