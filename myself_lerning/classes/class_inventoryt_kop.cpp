#include <bits/stdc++.h>
using namespace std;

class Item {
private:
    string name;
    int quantity;
public:
    Item(string name_, int quantity_) {
        name = name_; 
        quantity = quantity_;
    }

    Item(const Item &other) {
        name = other.name;
        quantity = other.quantity;
        cout << "Item " << name << " copied" << endl;
    }

    int addStock(int amount) {
        quantity += amount;
        return quantity;
    }
    void printItem() {
        cout << "Quantity = " << quantity << endl;
    }
};

int main() {
    Item sword("Sword", 5);
    Item copySword = sword;

    copySword.addStock(10);
    sword.printItem();
    copySword.printItem();

    vector<Item> inventory;
    inventory.push_back(sword);
    inventory[0].printItem();
}