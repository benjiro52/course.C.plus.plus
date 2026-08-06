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
    int getAmount() {
        return amount;
    }
    void getInfo() {
        cout << "Name: " << name << endl;
        cout << "Artikul: " << artikul << endl;
        cout << "Amount: " << amount << endl;
        cout << "Price: " << price << endl;
    }

    void addAmount(int n) {
        amount += n;
    }
};

class Warehouse {
private:
    vector<Product> sklad;
public:
    void printSklad() {
        if (sklad.size() == 0) {
            cout << "the warehouse is empty." << endl;
        } else {
            for (int i = 0; i < sklad.size(); i++) {
                sklad[i].getInfo();
                cout << "________________________" << endl;
            }
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
    void changeAmount(int change_amount_artikul_, int add_amount) {
        for (int i = 0; i < sklad.size(); i++) {
            if (sklad[i].getArtikul() == change_amount_artikul_) {
                sklad[i].addAmount(add_amount);
                return;
            }
        }
    }
    void findProduct(int find_artikul_) {
        for (int i = 0; i < sklad.size(); i++) {
            if (sklad[i].getArtikul() == find_artikul_) {
                sklad[i].getInfo();
            }
        }
    }
};

void clearConsole() {
    cout << "\033[2J\033[1;1H";
}

int main() {
    bool start_end = true;
    Warehouse wr;
    while (start_end) {
        int action;
        cout << endl << "Warehouse: " << endl;
        wr.printSklad();

        cout << "1.Add a product" << endl;
        cout << "2.Delete a product" << endl;
        cout << "3.Find a product" << endl;
        cout << "4.Change of the amount" << endl;
        cout << "5.Exit" << endl;
        cin >> action;

        if (action == 1) {
            clearConsole();
            string action_name;
            int action_artikul;
            int action_amount;
            double action_price;

            cout << "Name of the product: "; cin >> action_name; 
            cout << "Artikul of the product: "; cin >> action_artikul;
            cout << "Amount of the product: "; cin >> action_amount;
            cout << "Price if the product: "; cin >> action_price;   

            Product prod(action_name, action_artikul, action_amount, action_price);
            wr.addProduct(prod);
        }

        if (action == 2) {
            clearConsole();
            wr.printSklad();

            int action_del_arikul;
            cout << "Artikul of the product: "; cin >> action_del_arikul;
            wr.delProduct(action_del_arikul);
        }

        if (action == 3) {
            clearConsole();
            wr.printSklad();
            
            int find_artikul;
            cout << "Artikul: "; cin >> find_artikul;
            cout << "Your product: "<< endl;
            wr.findProduct(find_artikul);
        }

        if (action == 4) {
            clearConsole();
            wr.printSklad();

            int change_amount_artikul;
            int change_amount;
            cout << "Artikul: "; cin >> change_amount_artikul;
            cout << "Amount: "; cin >> change_amount;
            wr.changeAmount(change_amount_artikul, change_amount);
        }

        if (action == 5) {
            start_end = false;
        }
    }
}