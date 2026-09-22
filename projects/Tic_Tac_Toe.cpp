#include <bits/stdc++.h>
using namespace std;

void clearConsole() {
    cout << "\033[2J\033[1;1H";
}
void printBoard(const vector<vector<char>>& board) {
    for (int i = 0; i < 3; i++) {
        cout << " ";
        for (int j = 0; j < 3; j++) {
            cout << board[i][j];
            if (j < 2) {
                cout << " | ";
            }
        }

        cout << endl;

        if (i < 2) {
            cout << "---+---+---" << endl;
        }
    }
    cout << endl;
}

bool win_loose(const vector<vector<char>>& board, char sign) {
    for (int i = 0; i < 3; i++) {
        if (board[i][0] == sign && board[i][1] == sign && board[i][2] == sign) {
            return true;
        }
    }

    for (int j = 0; j < 3; j++) {
        if (board[0][j] == sign && board[1][j] == sign && board[2][j] == sign) {
            return true;
        }
    }

    if (board[0][0] == sign && board[1][1] == sign && board[2][2] == sign) {
        return true;
    }

    if (board[0][2] == sign && board[1][1] == sign && board[2][0] == sign) {
        return true;
    }
    return false;
}

int main() {
    vector<vector<char>> board(3, vector<char>(3, ' '));
    bool start_stop = true;
    int tic_check = 1;

    while (start_stop) {
        clearConsole();
        cout << "benjiro's Tic-Tac-Toe" << endl;
        printBoard(board);

        if (win_loose(board, 'X')) {
            cout << "X won!";
            break;
        }
        if (win_loose(board, 'O')) {
            cout << "O won!";
            break;
        }

        if (tic_check % 2 != 0) {
            cout << "Enter row(X): ";
            int row; cin >> row; // строка

            cout << "Enter column(X): ";
            int column; cin >> column; // ряд

            if (board[row - 1][column - 1] != 'O') {
                board[row - 1][column - 1] = 'X';
            }
        } else {
            cout << "Enter row(O): ";
            int row; cin >> row;

            cout << "Enter column(O): ";
            int column; cin >> column;

            if (board[row - 1][column - 1] != 'X') {
                board[row - 1][column - 1] = 'O';
            }
        }
        tic_check++;
    }

    this_thread::sleep_for(std::chrono::seconds(5));
    return 0;
}