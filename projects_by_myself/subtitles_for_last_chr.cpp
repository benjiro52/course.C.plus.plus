#include <iostream>
#include <thread>
#include <chrono>
#include <windows.h>

using namespace std;

int main() {
    PlaySound(TEXT("Wham_-Last-Christmas.wav"), nullptr, SND_FILENAME | SND_ASYNC);

    this_thread::sleep_for(chrono::seconds(5));
    cout << "Ah, ah-ah" << endl;

    this_thread::sleep_for(chrono::seconds(3));
    cout << "Ooh-woah";

    this_thread::sleep_for(chrono::seconds(4));
    cout << "Ooh-woah";

    this_thread::sleep_for(chrono::seconds(270));

    return 0;
}
