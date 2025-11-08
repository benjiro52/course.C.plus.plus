#include <bits/stdc++.h>
using namespace std;

class christmastree {
private:
    const char* reset = "\033[0m";
    const char* colors[6] = { "\033[33m", "\033[31m", "\033[32m", "\033[34m", "\033[35m", "\033[37m" };
    vector<string> tree = {
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
        "      | | |      "
    };
    vector<string> footertext;
    int treeheight;
    int delayms;
    bool running;

public:
    christmastree(int delay = 150) : treeheight(tree.size()), delayms(delay), running(true) {
        srand(time(0));
    }

    void drawframe() {
        cout << "\033[" << treeheight + footertext.size() << "A";
        for (auto& line : tree) {
            for (char c : line) {
                if (c == '*') {
                    if (rand() % 3 == 0)
                        cout << colors[rand() % 6] << "*" << reset;
                    else
                        cout << "*";
                } else {
                    cout << c;
                }
            }
            cout << endl;
        }
        for (auto& line : footertext)
            cout << line << endl;
    }

    void start() {
        for (auto& line : tree) cout << line << endl;
        for (auto& line : footertext) cout << line << endl;
        while (running) {
            drawframe();
            this_thread::sleep_for(chrono::milliseconds(delayms));
        }
    }

    void stop() { running = false; }
};

int main() {
    christmastree tree(150);
    tree.start();
}
