#include <bits/stdc++.h>
using namespace std;

class bankAccount {
private:
    string ownerName;
    double balance;

public:
    void setData(string name, double bal) {
        ownerName = name;
        balance = bal;
    }
    double deposit(double amount) {
        balance += amount;
        return balance;
    }
    double withdraw(double amount) {
        double newBalance = balance - amount; 
        if (newBalance < 0) {
            cout << "Error" << endl;
        } else {
            balance = newBalance; 
        }
        return balance;
    }
    void printBalance() {
        cout << "Your name: " << ownerName << endl << "Your balance: " << balance << endl;
    }

};

int main() {
    bankAccount acc;

    string name;
    double startBalance;

    cout << "Enter owner name: ";
    cin >> name; 

    cout << "Enter starting balance: ";
    cin >> startBalance;

    acc.setData(name, startBalance);

    double depositAmount;
    cout << "Enter deposit amount: ";
    cin >> depositAmount;
    acc.deposit(depositAmount);

    double withdrawAmount;
    cout << "Enter withdraw amount: ";
    cin >> withdrawAmount;
    acc.withdraw(withdrawAmount);

    acc.printBalance();

    return 0;
}