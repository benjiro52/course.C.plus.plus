#include <bits/stdc++.h>
using namespace std;

int main() {
    bool start_game = true;
    vector <string> words = {"Akashi", "Kise", "Midorima", "Murasakibara", "Kuroku", "Aomine"};
    vector <string> symbols_words = {"_ _ _ _ _ _", "_ _ _ _", "_ _ _ _ _ _ _ _", "_ _ _ _ _ _", "_ _ _ _ _ _"};
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
    int index = rand() % 6; 
    cout << "Your word is: " << symbols_words[index] << endl << endl;
    while (start_game) {
        
    }


    
}