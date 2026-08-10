#include <iostream>
#include <algorithm>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;
int main()
{   
    cout << "WRITE EVERYTHING IN SMALL LETTERS!!!" << endl;
    short check_email = 0, check_name = 0, check_surname = 0, check_place = 0;
    string name, surname, email;
    string telefon, place, school;

    cout << "Name:" << " ";
    getline(cin, name);
    for (int i = 0; i < name.size(); i++) {
        if (!(name[i] >= 97 && name[i] <= 122)) {
            cout << endl;
            cout << "Something is wrong with your name. Try again." << endl;
            cout << "Name:" << " ";
            getline(cin, name);
            cout << endl;
        }
    }

    cout << "Surname:" << " ";
    getline(cin, surname);
    for (int i = 0; i < surname.size(); i++) {
        if (!(surname[i] >= 97 && surname[i] <= 122)) {
            cout << endl;
            cout << "Something is wrong with your surname. Try again." << endl;
            cout << "Surname:" << " ";
            getline(cin, surname);
            cout << endl;
        }
    }


    cout << "E - Mail:" << " ";
    getline(cin, email);
    while (true) {
        check_email = 0;
        for (int i = 0; i < email.size(); i++) {
            if (email[i] == '@') {
                check_email++;
            }
        }
        if (check_email > 0 && email.find('.', email.find('@')) != string::npos) {
            break;
        } else {
            cout << endl;
            cout << "Something is wrong with your E - Mail. Try again." << endl;
            cout << "E - Mail: ";
            getline(cin, email);
            cout << endl;
        }
    }

    cout << "Telefon:" << " ";
    getline(cin, telefon);
    for (int i = 0; i < telefon.size(); i++) {
        if (!(telefon[i] >= 48 && telefon[i] <= 57)) {
            cout << endl;
            cout << "Something is wrong with your telefon. Try again." << endl;
            cout << "Telefon: ";
            getline(cin, telefon);
            cout << endl;
        }
    }

    cout << "Place of residence:" << " ";
    getline(cin, place);
    for (int i = 0; i < place.size(); i++) {
        if (!(place[i] >= 44 && place[i] <= 57 || place[i] >= 97 && place[i] <= 122 || place[i] == ' ')) {
            cout << endl;
            cout << "Something is wrong with your place of residence. Try again." << endl;
            cout << "Place of residence: ";
            getline(cin, place);
            cout << endl;
        }
    }
    cout << endl;
    cout << "SCHOOL EDUCATION" << endl;

    cout << "Your school:" << " ";
    getline(cin, school);
    for (int i = 0; i < school.size(); i++) {
        if (!(school[i] >= 44 && school[i] <= 57 || school[i] >= 97 && school[i] <= 122 || school[i] == ' ')) {
            cout << endl;
            cout << "Something is wrong with your school. Try again." << endl;
            cout << "Your school: ";
            getline(cin, school);
            cout << endl;
        }
    }

    string mark_math, mark_english, mark_german;

    cout << "Your marks:" << " ";
    cout << endl;
    cout << "Math" << " ";
    getline (cin, mark_math);
    for (int i = 0; i < mark_math.size(); i++) {
        if (!(mark_math[i] >= 49 && mark_math[i] <= 54)) {
            cout << endl;
            cout << "You can't have this mark. Try again" << endl;
            cout << "Math";
            getline (cin, mark_math);
            cout << endl;
        }
    }

    cout << "English" << " ";
    getline (cin, mark_english);
    for (int i = 0; i < mark_english.size(); i++) {
        if (!(mark_english[i] >= 49 && mark_english[i] <= 54)) {
            cout << endl;
            cout << "You can't have this mark. Try again" << endl;
            cout << "English";
            getline (cin, mark_english);
            cout << endl;
        }
    }

    cout << "German" << " ";
    getline (cin, mark_german);
    for (int i = 0; i < mark_german.size(); i++) {
        if (!(mark_german[i] >= 49 && mark_german[i] <= 54)) {
            cout << endl;
            cout << "You can't have this mark. Try again" << endl;
            cout << "German";
            getline (cin, mark_german);
            cout << endl;
        }
    }

    int math, english, german;
    math = stoi(mark_math);
    english = stoi(mark_english);
    german = stoi(mark_german);
    
    cout << "Your GPA is" << " " << (math + english + german) / 3;
    int gpa;
    if (gpa == 1) {
        cout << endl;
        cout << "With your marks you can go anywhere";
    }
}