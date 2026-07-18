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

    void deposit(double deposit_sum) {
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
        cout << "_____________________" << endl;
    }
};

int main() {
    vector<Account> vec_accounts;
    bool start_end = true;

    while (start_end) {
        int action;
        cout << "1.Create a bank account" << endl;;
        cout << "2.Deposit" << endl;
        cout << "3.Withdraw" << endl;
        cout << "4.View balance" << endl;
        cout << "5.View accounts" << endl;
        cout << "6.Quit" << endl;
        cin >> action;

        if (action == 1) {
            string name_of_user;
            string name_schet;
            double balance_of_user;

            cout << "Name of user: ";
            cin >> name_of_user;
            
            cout  << "Name of the bank account: ";
            cin >> name_schet;

            cout  << "Balance: ";
            cin >> balance_of_user;
            Account acc(name_of_user, name_schet, balance_of_user);
            vec_accounts.push_back(acc);
        }

        if (action == 2) {
            if (vec_accounts.size() == 0) {
                cout << "No accounts found" << endl;
            } else {
                int account_number;
                double deposit_sum2;
                cout << "Which account?" << endl;
                for (int i = 0; i < vec_accounts.size(); i++) {
                    vec_accounts[i].showInfo();
                }
                cin >> account_number;
                cout << "Your deposit in $: "; cin >> deposit_sum2;
                vec_accounts[account_number - 1].deposit(deposit_sum2);
            }
        }
        
        if (action == 3) {
            if (vec_accounts.size() == 0) {
                cout << "No accounts found" << endl;
            } else {
                int account_number;
                double withdraw_sum2;
                cout << "Which account?" << endl;
                for (int i = 0; i < vec_accounts.size(); i++) {
                    vec_accounts[i].showInfo();
                }
                cin >> account_number;
                cout << "Your withdraw in $: "; cin >> withdraw_sum2;
                vec_accounts[account_number - 1].withdraw(withdraw_sum2);
            }
        }

        if (action == 4) {
            if (vec_accounts.size() == 0) {
                cout << "No accounts found" << endl;
            } else {
                 for (int i = 0; i < vec_accounts.size(); i++) {
                    vec_accounts[i].getBalance();
                }
            }
        }

        if (action == 5) {
            if (vec_accounts.size() == 0) {
                cout << "No accounts found" << endl;
            } else {
                for (int i = 0; i < vec_accounts.size(); i++) {
                    vec_accounts[i].showInfo();
                }
            }
        }

        if (action == 6) {
            cout << "Bye";
            start_end = false;
        }
    }

    return 0;
}