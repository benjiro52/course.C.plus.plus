#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int age;
    double grade;
};

int main() {
    student s;
    s.name = "Ivan";
    s.age = 15;
    s.grade = 1.9;

    cout << "Name: " << s.name << ", " << "Age: " << s.age << ", " << "Grade: " << s.grade;

    return 0;
}