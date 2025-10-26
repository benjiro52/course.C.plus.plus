#include <iostream>

using namespace std;

int main()
{
    int a, b, c, g, h, s, sec, sec2, perevod, lang;
    cin>>a>>b>>c>>g>>h>>s;

    sec = (a * 3600) + (b * 60) + c;
    sec2 = (g * 3600) + (h * 60) + s;

    lang = sec2 - sec;

    cout<<lang / 3600<<" "<<lang / 60 % 60<<" "<<lang % 60;
}