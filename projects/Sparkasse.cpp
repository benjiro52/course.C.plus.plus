#include <bits/stdc++.h>
using namespace std;

class Account {
protected:
    string name;
    string name_schet;
    double balance;
public:
    Account(string name_, string name_schet_, double balance_) {
        name = name_;
        name_schet = name_schet_;
        balance = balance_;
    }

    void Deposit(double deposit_sum) {
        if (deposit_sum >= 0) {
            balance += deposit_sum;
        }
    }
    void withdraw(double withdraw_sum) {
        if (withdraw_sum >= 0) {
            balance -= withdraw_sum;
        }
    }

    void getBalance() {
        cout << "The balance of " << name << " is: " << balance << endl;
    }
    void getAccountNumber() {
        cout << "The account number of " << name << " is: " << name_schet << endl;
    }
    void showInfo() {
        cout << "Name: " << name << endl;
        cout << "The account number is: " << name_schet << endl;
        cout << "The balance is: " << balance << endl;
    }
};

int main() {
    vector<Account> acc;
    int n = 5;;

    for (int i = 0; i < n; i++) {
        string name;
        string account;
        double balance;

        cout << "Name: ";
        cin >> name;

        cout << "Account: ";
        cin >> account;

        cout << "Balance: ";
        cin >> balance;

        cout << "_____________________" << endl;
        acc.push_back(Account(name, account, balance));
    }
    while (true) {
        
    }
}