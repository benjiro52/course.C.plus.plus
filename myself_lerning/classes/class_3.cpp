#include <bits/stdc++.h>
using namespace std;

class student {
private:
    string name;
    int age;
    double grade;
public:
    void setData(string n, int a, double g) {
        name = n;
        age = a;
        grade = g;
    }
    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl;
        cout << "Grade: " << grade << endl;
    }   
    bool isExcellent() {
        if (grade >= 4.5) {
            return true;
        } else {
            return false;
        }
    }
};

int main() {
    student st; 
    st.setData("Ivan", 16, 4.9);
    st.printInfo();

    cout << st.isExcellent();

    return 0;
}