#include <bits/stdc++.h>
using namespace std;

class Product{
protected:
    string name;
    int artikul;
    int amount;
    double price;
public:
    Product(string name_, int artikul_, int amount_, double price_) {
        name = name_;
        artikul = artikul_;
        amount = amount_;
        price = price_;
    }
    int getArtikul() {
        return artikul;
    }
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Artikul: " << artikul << endl;
        cout << "Amount: " << amount << endl;
        cout << "Price: " << price;
    }
};

class Warehouse {
private:
    vector<Product> sklad;
public:
    void printSklad() {
        for (int i = 0; i < sklad.size(); i++) {
            cout << "________________________" << endl;
            sklad[i].getInfo();
        }
    }
    void addProduct(Product p) {
        sklad.push_back(p);
    }
    void delProduct(int del_artikul) {
        for (int i = 0; i < sklad.size(); i++) {
            if (sklad[i].getArtikul() == del_artikul) {
                sklad.erase(sklad.begin() + i);
                return;
            }
        }
    }


};

int main() {
    bool start_end = true;
    while (start_end) {
        
    }
}