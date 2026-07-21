#include <bits/stdc++.h>
using namespace std;

class Song {
public:
    string title;
    static int copyCount;

    Song(string title_) {
        title = title_;
    }

    Song(const Song &other) {
        title = other.title;
        copyCount++;
        cout << "Song copied: " << title << endl;
    }

    void printSong() {
        cout << "Name: " << title << endl;
    }
};
int Song::copyCount = 0;

int main() {
    Song s1("Rockstar");
    s1.printSong();
    Song s2 = s1;
    Song s3 = s2;

    cout << "Total copies: " << Song::copyCount << endl;
}