#include <bits/stdc++.h>
using namespace std;

struct task {
    string text;
    bool done;
};

task input_task() {
    task temp;
    cout << "Enter your task: ";
    getline(cin, temp.text);
    temp.done = false;
    return temp;
}

int main() {
    // task t1 = input_task();
    vector<task> tasks;
    int count_of_tasks;
    int b = 0;
    int tablo;
    bool start_end = true;
    string adding;

    cout << "How many tasks do you have? ";
    cin >> count_of_tasks;
    cin.ignore();

    while (b < count_of_tasks) {
        task t = input_task();
        tasks.push_back(t);
        b++;
    }

    // cout << endl << "Your tasks are:" << endl;
    // for (int i = 0; i < tasks.size(); i++) {
    //     cout << tasks[i].text << endl;
    // }
    cout << endl;
    while (start_end) {
        cout << "1.Show tasks" << endl << "2.Mark completed" << endl;
        cout << "3.Add one more task" << endl << "4.Quit" << endl;
        cin >> tablo;

        if (tablo == 1) {
            cout << "Your tasks are:" << endl;
            for (int i = 0; i < tasks.size(); i++) {
                if (tasks[i].done == false) cout << i << "." << tasks[i].text << endl;
            }
            cout << endl;
        }
        if (tablo == 2) {
            int index;
            cout << "Task that you've completed: ";
            cin >> index;

            tasks[index].done = true;
            cout << endl;
        }
        cin.ignore();
        if (tablo == 3) {
            cout << "Enter your task: ";
            task new_one = input_task(); 
            tasks.push_back(new_one);

            cout << endl;
        }
        if (tablo == 4) {
            cout << "Goodbye!" << endl;
            start_end = false;
        }
    }

    // while (start_end) {
    //     cout << "Do you want to add smth? ";
    //     cin >> adding;
    //     if (adding == "yes" || adding == "Yes") {
    //         count_of_tasks = 0;
    //         b = 0;
    //         cout << "How many? ";
    //         cin >> count_of_tasks;
    //         while (b <= count_of_tasks) {
    //             task t = input_task();
    //             tasks.push_back(t);
    //             b++;
    //         }
    //         cout << endl << "Your tasks are:";
    //     } else if (adding == "no" || adding == "No"){
    //         cout << "Have you done anything? ";
    //     }
    // }
}