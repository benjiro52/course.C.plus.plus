#include <bits/stdc++.h>
using namespace std;

struct product
{
    string name;
    double price;
    int quantity;
};

int main() {
    product t1;
    product t2;
    product t3;
    product t4;

    t1.name = "kartoffel";
    t1.price = 0.2;
    t1.quantity = 10;

    t2.name = "apfel";
    t2.price = 0.3;
    t2.quantity = 8;

    t3.name = "gurke";
    t3.price = 0.2;
    t3.quantity = 20;

    t4.name = "zwiebel";
    t4.price = 0.1;
    t4.quantity = 30;

    double price = 0;
    vector<product> tovari = {t1, t2, t3, t4};
    for (int i = 0; i < tovari.size(); i++) {
        price += tovari[i].price * tovari[i].quantity;
    }

    cout << price;
    return 0;
}