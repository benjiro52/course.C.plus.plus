#include <bits/stdc++.h>
using namespace std;
void clearConsole() {
    cout << "\033[2J\033[1;1H";
}

void hm() {
    clearConsole();
    this_thread::sleep_for(chrono::seconds(1));
    cout << "hmmm" << endl;

    this_thread::sleep_for(chrono::seconds(1));
    cout << "hmmmmm" << endl;

    this_thread::sleep_for(chrono::seconds(1));
    cout << "hmmmmmmmmmm" << endl;

    this_thread::sleep_for(chrono::seconds(1));
}

int main() {
    short girl;

    cout << "1. Dasha" << endl; // gg
    cout << "2. Starlight" << endl;
    cout << "3. Norwegian" << endl; //gg
    cout << "4. Jeans" << endl;
    cout << "5. Polina" << endl;
    cout << "6. Another choice(" << endl; // gg
    cout << "7. I am sigma(NO CHOICE)" << endl;
    cout << "Which girl do you choose? "; cin >> girl;

    if (girl == 1) {
        clearConsole();
        cout << "Fu, libitel schluh((((" << endl;
        cout << "Podumai nad svoim viborom";
        system("shutdown /s /t 5"); 
    } else if (girl == 2) {
        clearConsole();
        cout << "Na Joe Goldbergchah" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Timoha rides on a bike.";
    } else if (girl == 3) {
        clearConsole();
        cout << "She lives in Norway, bro" << endl;
        cout << "You have no chance, sorry" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "You have to be 6.5 htn that is impossible for you";
        system("shutdown /s /t 5");
    } else if (girl == 4) {
        clearConsole();
        cout << "Bro, are you alright?" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "These are jeans.";
    } else if (girl == 5) {
        clearConsole();
        hm();
        clearConsole();
        cout << "Dont copy benjiro ♡" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "system(shutdown /s /t 5)"; 
    } else if (girl == 6) {
        string who;
        cout << "Then who? "; cin >> who;
        cout << endl << "ok" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Bad decision";
        system("shutdown /s /t 5"); 
    } else if (girl == 7) {
        cout << "You are real sigma!" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Respekt to you bro" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Have a good day";

    }

    this_thread::sleep_for(chrono::seconds(5));
    return 0;
}