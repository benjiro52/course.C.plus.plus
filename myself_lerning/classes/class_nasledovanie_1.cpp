#include <bits/stdc++.h>
using namespace std;

class person {
public:
    string name;
    int age;

    person(string n, int ag) {
        name = n;
        age = ag;
    }

    void printInfo() {
        cout << "Name: " << name << endl;
        cout << "Age: " << age << endl; 
    }
};

class student : public person {
public:
    string school;
    student(string n, int ag, string s) : person(n, ag) {
        school = s;
    }; 
    void printStudentInfo() {
        printInfo();
        cout << "School: " << school << endl;
    }
};

int main() {
    student st("Ivan", 16, "Gymnasium 5");
    st.printStudentInfo();
}