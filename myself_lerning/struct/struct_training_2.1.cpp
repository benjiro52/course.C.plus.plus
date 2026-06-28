#include <bits/stdc++.h>
using namespace std;

struct student {
    string name;
    int age;
    double grade;
};

int main() {
    student s1;
    student s2;
    student s3;
    student s_best;

    s1.name = "Ivan";
    s1.age = 15;
    s1.grade = 4.7;

    s2.name = "Timoha";
    s2.age = 16;
    s2.grade = 4.73;

    s3.name = "Atsushi";
    s3.age = 18;
    s3.grade = 4.9;


    vector<student> students = {s1, s2, s3};
    double best = 0;
    for (int i = 0; i < students.size(); i++) {
        if (students[best].grade < students[i].grade) {
            best = i;
            s_best.name = students[i].name;
            s_best.age = students[i].age;
            s_best.grade = students[i].grade;
            
        }
        cout << students[i].name << " " << students[i].age << " " << students[i].grade << endl; //!!!!!!!!!!!!!!!!!!!!!!!!!!!!
    }

    cout << "The best student is: " << students[best].name << ", "  << students[best].age << ", " << students[best].grade;
    return 0;
}