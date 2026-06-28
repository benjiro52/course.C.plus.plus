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
    cout << "Ooh-woah" << endl;

    this_thread::sleep_for(chrono::seconds(5));
    cout << "Oh-oh" << endl;

    this_thread::sleep_for(chrono::seconds(6));
    cout << "Last Christmas, I gave you my heart" << endl;

    this_thread::sleep_for(chrono::seconds(4));
    cout << "But the very next day, you gave it away" << endl;

    this_thread::sleep_for(chrono::seconds(270));

    return 0;
}
