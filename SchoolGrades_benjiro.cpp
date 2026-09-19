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

int main () {
    bool isRunning = true;
    int choose_menu = 0;
    vector<Subject> notan;

    while(isRunning) {
        clearConsole();
        cout << "benjiro's Notan" << endl << endl;
        if (!notan.empty()) {
            cout << "Your subjects: " << endl;
            for (int i = 0; i < notan.size(); i++) {
                notan[i].printInfo();
            }
        }

        cout << "Choose an action " << endl;
        cout << "1 - Create school subject" << endl;
        cout << "2 - Add a mark" << endl;
        cout << "3 - Exit" << endl;

        cin >> choose_menu;

        if (choose_menu == 1) {
            clearConsole();
            cout<<"Enter the subject name" << endl;

            string subject_name_menu; cin >> subject_name_menu;

            Subject subject(subject_name_menu);
            notan.push_back(subject);
        }

        if (choose_menu == 2) {
            clearConsole();
            string subject_name_mark;
            int add_mark_notan;

            cout << "Enter the subject name: "; cin >> subject_name_mark;
            cout << "Enter a mark: "; cin >> add_mark_notan;
            
            for (int i = 0; i < notan.size(); i++) {
                if (notan[i].getName() == subject_name_mark) {
                    notan[i].addMark(add_mark_notan);
                }
            }
        }

        if (choose_menu == 3){
            isRunning = false;
        } 
    }
}