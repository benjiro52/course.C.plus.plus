#include <bits/stdc++.h>
using namespace std;

void clearConsole() {
    cout << "\033[2J\033[1;1H";
  }
void ironSword(){
    string sword = "You found an iron sword! ";
    cout<< sword;
  }
void Greeting(){
    string greet = "Hello, you are now in the forest of King Tsykov, decide where do you want to go (You see an interesting chest in the Cave) ";
    cout<< greet;
  }
int main() {

    bool isRunning = true;
    bool IronSwordFound = false;
    bool welcome = false;
    bool Armor = false;

    while(isRunning == true){
        

        if(welcome == false) {
            Greeting();
            welcome = true;
          };
          cout<< endl;
        cout<< "1 - Go to the North " << endl;
        cout<< "2 - Go to the South " << endl;
        cout<< "3 - Hide in the cave" << endl;
        cout<< "4 (or more) - exit from the game " << endl;


        int num;
        cin>> num;
        
        if(num == 1){
        
            clearConsole();
            if(IronSwordFound == false){
                ironSword();
            IronSwordFound = true;}

            string dec1;

            cout<< "You see the Red knight Benjiro in front of you " << endl;
            cout<< "Would you like to come back? Or take a fight with a Red knight Benjiro?" << endl;

            cout<< "Write (B) if you want to go back, Write (F) if you want to fight " << endl;
            // getline(cin, dec1); зачем мне гетлайн если я пишу одну букву?
            // cin.ignore(); нужно понять что это, но вроде как ясно, игнорит прошлый син???
            cin >> dec1;

            clearConsole();

            if(dec1 == "B" || dec1 == "b") {
                cout<<"So, you are again in the King's Tsykov forest, you need to choose, do you want to go to the North (write 1), South (write 2) or hide in the cave (write 3)";
            }
            if (dec1 == "F" || dec1 == "f") {
                if (Armor == false){
                cout<<"Benjiro the red knight takes out his spear and kills you";
            isRunning = false;}

                else {cout<<"You killed Benjiro the red knight, congratulations! He was protecting the gates of exit, so you escaped!" << endl;
                    cout<< "Well played!";
                isRunning = false;}
                
            }
        }
        

        if(num == 2){
            clearConsole();
            string dec2;


            cout<< "You see a mysterious temple, it looks abbandoned and dangerous, would you like to visit it?? " << endl;
            cout<< "If you want to go back, write (B), Write (V) to visit it " << endl;
            cin>> dec2;
            if(dec2 == "B" || dec2 == "b") {
                cout<<"So, you are again in the King's Tsykov forest, you need to choose, do you want to go to the North (write 1), South (write 2) or hide in the cave (write 3)";
            }
            if(dec2 == "V" || dec2 == "v"){
                cout<< "You see through the darkness a throne. There is someone, who sits on it, it's Tsykov himself..." << endl;
                cout<< "He tells you: Говори, глупец. (from Russian: Speak, fool)" << endl;

                string dec3;
                cout<< "If you want to ask for armor, write (A), if you want to apologize fight him, write (D)" << endl;

                cin>> dec3;

                clearConsole();
                
                if(dec3 == "A" || "a"){
                    cout<< "Tsykov showed his mercy to you and gave you diamond armor, for your courage not to be scared talking to him";
                    Armor = true;
                }
                if(dec3 == "D" || dec3 == "d"){
                    cout<<"You died immediately, nice try, brave warrior";
                    isRunning = false;
            }
        }
    }

    if(num == 3){
        clearConsole();
        cout<<"You tried to hide in the cave, but you got killed by Mimic Chest, what an idiot :/ " << endl;
    
        isRunning = false;
     }

    if(num >= 4){
        isRunning = false;
     }
   }
 }

