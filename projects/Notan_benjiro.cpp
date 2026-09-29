#include <bits/stdc++.h>
using namespace std;

void clearConsole() {
    cout << "\033[2J\033[1;1H";
}

class Subject {
private:
    string subjectName;
    vector<int> vec_marks;
public:
    Subject(string subjetcName_) {
        subjectName = subjetcName_;
    } 

    string getName() {
        return subjectName;
    }

    void del_Mark(int del_mark) {
        for (int i = 0; i < vec_marks.size(); i++) {
            if (vec_marks[i] == del_mark) {
                vec_marks.erase(vec_marks.begin() + i);
                return;
            }
        }
    }

    int getMarksSum() {
        int sum = 0;

        for (int i = 0; i < vec_marks.size(); i++) {
            sum += vec_marks[i];
        }
        return sum;
    }
    
    int getMarksCount() {
        return vec_marks.size();
    }
    
    void addMark(int mark_) {
        vec_marks.push_back(mark_);
    }

    void printInfo() {
        cout << subjectName << endl;
        cout << "Marks: ";
        for (int i = 0; i < vec_marks.size(); i++) {
            cout << vec_marks[i] << " | ";
        }
        cout << endl << "_____________________________" << endl;
    }

};

// delete subject
// delete mark

int main () {
    bool isRunning = true;
    int choose_menu = 0;
    vector<Subject> notan;

    while(isRunning) {
        clearConsole();
        cout << "benjiro's Notan" << endl << endl;

        if (!notan.empty()) {
            double totalSum = 0;
            int totalMarks = 0;

            for (int i = 0; i < notan.size(); i++) {
                totalSum += notan[i].getMarksSum();
                totalMarks += notan[i].getMarksCount();
            }
            if (totalMarks > 0) {
                double average = totalSum / totalMarks;
                cout << "Average score: " << fixed << setprecision(1) << average << endl;
            }

            cout << "Your subjects: " << endl;
            for (int i = 0; i < notan.size(); i++) {
                notan[i].printInfo();
            }
        }

        cout << "Choose an action\n";
        cout << "1 - Create school subject\n";
        cout << "2 - Delete school subject\n";
        cout << "3 - Add a mark\n";
        cout << "4 - Delete mark\n";
        cout << "5 - Exit\n";

        cin >> choose_menu;
        cin.ignore(numeric_limits<streamsize>::max(), '\n');

        if (choose_menu == 1) {
            clearConsole();
            cout<<"Enter the subject name: ";

            string subject_name_menu; getline(cin, subject_name_menu);

            Subject subject(subject_name_menu);
            notan.push_back(subject);
        }

        if (choose_menu == 2) {
            clearConsole();
            cout << "Enter the subject name: ";
            string subject_name_menu_del; getline(cin, subject_name_menu_del);

            for (int i = 0; i < notan.size(); i++) {
                if (notan[i].getName() == subject_name_menu_del) {
                    notan.erase(notan.begin() + i);
                    break;
                }
            }
        }

        if (choose_menu == 3) {
            clearConsole();
            string subject_name_mark;
            int add_mark_notan;

            cout << "Enter the subject name: "; getline(cin, subject_name_mark);
            cout << "Enter a mark: "; cin >> add_mark_notan;
            
            for (int i = 0; i < notan.size(); i++) {
                if (notan[i].getName() == subject_name_mark) {
                    notan[i].addMark(add_mark_notan);
                    break;
                }
            }
        }

        if (choose_menu == 4) {
            clearConsole();
            cout << "Enter the subject name: ";
            string subject_name_menu_del_m; getline(cin, subject_name_menu_del_m);

            cout << "Enter a mark: ";
            int del_mark_notan; cin >> del_mark_notan;

            for (int i = 0; i < notan.size(); i++) {
                if (notan[i].getName() == subject_name_menu_del_m) {
                    notan[i].del_Mark(del_mark_notan);
                    break;
                }
            }
        }

        if (choose_menu == 5){
            isRunning = false;
        } 
    }
}