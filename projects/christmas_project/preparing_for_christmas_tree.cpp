#include <bits/stdc++.h>
using namespace std;

int main() {
    const char* reset = "\033[0m";
    const char* red = "\033[31m";
    const char* green = "\033[32m";
    const char* yellow = "\033[33m";
    const char* blue = "\033[34m";
    const char* purple = "\033[35m";
    const char* white = "\033[37m";

    const char* colors[] = { yellow, red, green, blue, purple, white };
    int numColors = 6;

    for (int j = 0; j < 20; j++) {
        cout << colors[j % numColors] << "*" << reset << " ";
        this_thread::sleep_for(chrono::milliseconds(200));
    }


}