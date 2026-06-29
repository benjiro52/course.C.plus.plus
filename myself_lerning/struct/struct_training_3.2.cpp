#include <bits/stdc++.h>
using namespace std;

struct task {
    string text;
    bool done;
};

int count_done(vector<task> tasks) {
    int count = 0;
    for (int i = 0; i < tasks.size(); i++) {
        if (tasks[i].done == true) {
            count++;
        }
    }
    return count;
}

int main() {
    task t1;
    task t2;
    task t3;
    task t4;
    task t5;

    t1.text = "Job finden";
    t1.done = true;

    t2.text = "Abitur bestehen";
    t2.done = true;

    t3.text = "In die Alpen reisen";
    t3.done = true;

    t4.text = "Allein nicht sterben";
    t4.done = false;

    t5.text = "C++ lernen";
    t5.done = true;

    vector<task> tasks = {t1, t2, t3, t4, t5};

    int ans = count_done(tasks);
    cout << "Выполнено задач: " << ans;

    return 0;
}