#include <bits/stdc++.h>
using namespace std;

class book {
private:
    string title;
    string autor;
    int year;

public:
    void setData(string t, string aut, int y) {
        title = t;
        autor = aut;
        year = y;
    }

    int getYear() { // геттер!!!!!!!!!!!
        return year;
    }

    void printBook() {
        cout << "Title: " << title << endl << "Autor: " << autor << endl << "Year: " << year << endl << "______________________" << endl;
    }
};

int main() {
    book book1, book2, book3, book4;
    book1.setData("Witch hat atelier", "Someone", 2016);
    book2.setData("Lord of the flies", "William Golding", 1900);
    book3.setData("Tomodachi game", "Sigma", 2013);
    book4.setData("Tokyo Ghoul", "dead inside", 2014);

    vector<book> books = {book1, book2, book3, book4};

    for (int i = 0; i < books.size(); i++) {
        if (books[i].getYear() > 2000) { // теперь через геттер!!!!!!!!!!!!!!!!!!!!
            books[i].printBook();
        }
    }

    return 0;
}