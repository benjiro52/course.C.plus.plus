#include <bits/stdc++.h>
#include <thread>
#include <chrono>
#include <windows.h>
#include <mmsystem.h>
#pragma comment(lib, "winmm.lib")  

using namespace std;

int main() {
    PlaySound(TEXT("C:\\Users\\User\\Downloads\\Wham_-Last-Christmas.wav"), NULL, SND_FILENAME | SND_ASYNC);

    const char* reset = "\033[0m";
    const char* red = "\033[31m";
    const char* green = "\033[32m";
    const char* yellow = "\033[33m";
    const char* blue = "\033[34m";
    const char* purple = "\033[35m";
    const char* white = "\033[37m";

    const char* colors[] = { yellow, red, green, blue, purple, white };
    int numColors = 6;

    string tree[] = {
        "        *        ",
        "       ***       ",
        "      *****      ",
        "     *******     ",
        "    *********    ",
        "   ***********   ",
        "  *************  ",
        " *************** ",
        "*****************",
        "      | | |      ",
        "      | | |      ",
    };

    for (int frame = 0; frame < 50; frame++) {
        system("cls");  

        const char* currentColor = colors[frame % numColors]; 

        for (string line : tree) {
            for (char c : line) {
                if (c == '*') {
                    cout << currentColor << "*" << reset;
                } else {
                    cout << c;
                }
            }
            cout << endl;
        }

        this_thread::sleep_for(chrono::milliseconds(300)); 
    }

    cout << "\nMerry Christmas! 🎅🎁" << endl;
    return 0;
}
