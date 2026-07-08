#include <bits/stdc++.h>
using namespace std;

class employee {
private:
    string name;
    string position;
    double salary;
public:
    void setData(string n, string pos, double sal) {
        name = n;
        position = pos;
        salary = sal;
    }

    void printEmployee() {
        cout << "Name: " << name << endl;
        cout << "Position: " << position << endl;
        cout << "Salary: " << salary << endl;
    }

    int getSalary() {
        return salary;
    }

    double giveRaise(double percent) {
        salary += salary / 100 * percent;
        return salary;
    }
};

int main() {
    employee em1;
    employee em2;
    employee em3;
    em1.setData("Ivan", "Junior", 3500);
    em2.setData("Timofiy", "Junior", 3500);
    em3.setData("Tsykov", "Doctor", 4500);

    vector<employee> workers = {em1, em2, em3};
    for (int i = 0; i < workers.size(); i++) {
        if (workers[i].getSalary() < 4000) {
            workers[i].giveRaise(15);
        }
        workers[i].printEmployee();
        cout << "____________________________" << endl;
    }
}   