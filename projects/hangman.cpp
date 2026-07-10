#include <bits/stdc++.h>
using namespace std;

int main() {
    bool start_game = true;
    int mistakes = 0;
    int check = 0;
    int a = 0;
    vector <string> words = {"akashi", "kise", "midorima", "murasakibara", "aomine"};
    vector<string> hangman = {
        // 0 ошибок
        "  +---+\n"
        "  |   |\n"
        "      |\n"
        "      |\n"
        "      |\n"
        "      |\n"
        "=========",

        // 1 ошибка
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        "      |\n"
        "      |\n"
        "      |\n"
        "=========",

        // 2 ошибки
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        "  |   |\n"
        "      |\n"
        "      |\n"
        "=========",

        // 3 ошибки
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        " /|   |\n"
        "      |\n"
        "      |\n"
        "=========",

        // 4 ошибки
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        " /|\\  |\n"
        "      |\n"
        "      |\n"
        "=========",

        // 5 ошибок
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        " /|\\  |\n"
        " /    |\n"
        "      |\n"
        "=========",

        // 6 ошибок (проигрыш)
        "  +---+\n"
        "  |   |\n"
        "  O   |\n"
        " /|\\  |\n"
        " / \\  |\n"
        "      |\n"
        "========="
    };

    srand(time(0));
    int index = rand() % words.size();

    string secret = words[index];
    vector<char> guessed(secret.size(), '_');

    while (start_game) {         
        cout << endl;
        cout << "Your word: ";
        for (int i = 0; i < guessed.size(); i++) {
            cout << guessed[i] << " ";
        }
        cout << endl;

        char letter;
        cout << "Letter: ";
        cin >> letter;
        bool found = false;

        for (int i = 0; i < secret.size(); i++) {
            if (secret[i] == letter) {
                found = true;
                guessed[i] = letter;
                check++;
            }
            
        }

        bool win = true;
        for (int i = 0; i < guessed.size(); i++) {
            if (guessed[i] == '_') {
                win = false;
                break;
            }
        }

        if (found == true) {
            for (int i = 0; i < guessed.size(); i++) {
                cout << guessed[i] << " ";
            }
        } else if (found == false) {
            cout << hangman[a];
            a++;
        }

        if (a == 7) {
            cout << endl;
            cout << "You lost";
            return 0;
        }
        if (win) {
            cout << endl;
            cout << "You won!!!";
            return 0;
        }
    }
}