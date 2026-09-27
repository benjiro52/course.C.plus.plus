#include <iostream>

using namespace std;
int main()
{
	short exit;
	short StartNumbers;
	double number1, number2;
	string megastart, start;
    //char arihpmetikOperation;
	cout << "Welcome to the program Helfer!" << endl << endl;
	cout << "1." << " " << "Start" << endl;
	cout << "2." << " " << "Exit" << endl;
	cout << "What do you want:" << " ";
	cin >> megastart;

	if (megastart == "Exit") {
		cout << "See you next time my friend)";
		return 0;
	}

	while (megastart != "Exit")	{ 
		cout << endl << endl;
		cout << "Options:" << endl;
		cout << "1." << " " << "Calculator" << endl;
		cout << "2." << " " << "Task with numbers (Write Numbers)" << endl;
		cout << "3." << " " << "Support" << endl;
		cout << "0." << " " << "Exit" << endl << endl;
		cout << " Enter option number:" << " ";
	
    	cin >> start;
		cout << endl;
	
		{ //CALCULATOR
		if (start == "Calculator") {
			short StartCalculator;
			cout << "Welcome to calculator!" << endl;
			cout << "1." << " " << "+" << endl;
			cout << "2." << " " << "-" << endl;
			cout << "3." << " " << "*" << endl;
			cout << "4." << " " << "/" << endl;
			cout << "   " << "Arithmetic symbol:" << " ";
			cin >> StartCalculator;
			cout << "Enter 2 number(separate with backspace):" << " ";
			// cin >> arihpmetikOperation;
			// if (arihpmetikOperation == "+") {
			//     1 + 1
			// }
			if (StartCalculator == 1) {
				cin >> number1 >> number2;
				double CalculatorAnswer1;
				CalculatorAnswer1 = number1 + number2;
				cout << "Result:" << " " << CalculatorAnswer1;
			}
			if (StartCalculator == 2) {
				cin >> number1 >> number2;
				double CalculatorAnswer2;
				CalculatorAnswer2 = number1 - number2;
				cout << "Result" << " " << CalculatorAnswer2;
			}
			if (StartCalculator == 3) {
				cin >> number1 >> number2;
				double CalculatorAnswer3;
				CalculatorAnswer3 = number1 * number2;
				cout << "Result" << " " << CalculatorAnswer3;
			}
			if (StartCalculator == 4) {
				cin >> number1 >> number2;
				double CalculatorAnswer4;
				CalculatorAnswer4 = number1 / number2;
				cout << "Result" << " " << CalculatorAnswer4;
			}
		}
	}
		{//NUMBERS - Chet ne chet
		if (start == "Numbers"){
			short ChetNeChet;
			cout << "Welcome to the task with numbers!" << endl;
			cout << "    " << "What do you want?" << endl;
			cout << "1." << " " << "Even numbers and odd numbers" << endl;
			cout << "2." << " " << "Prime numbers" << endl;
			cout << "3." << " " << "Number divisors" << endl;
			cout << "Not enough tasks? Contact support!" << endl;
			cout << "    " << "Task number:" << " ";
			cin >> StartNumbers;
			cout << endl;
			if (StartNumbers == 1){
				cout << "Select:" << endl;
				cout << "1." << " " << "Find the number of even numbers" << endl;
				cout << "2." << " " << "Find the number of odd numbers" << endl;
				cout << "    " << "Task number:" << " ";
				cin >> ChetNeChet;
				cout << endl;
				if (ChetNeChet == 1){
					cout << "Write until what number to look for even numbers:" << " ";
					cin >> number1;
					cout << "Result:" << " ";
					int i1 = 1, k1 = 0;
					while (i1 <= number1) {
						if (i1 % 2 == 0)
						k1 ++;
						i1 ++;
					}
					cout << k1;
				}
				if (ChetNeChet == 2) {
					cout << "Write until what number to look for odd numbers:" << " ";
					cin >> number1;
					cout << "Result" << " ";
					int i2 = 1, k2 = 0;
					while (i2 <= number1) {
						if (i2 % 2 != 0)
						k2 ++;
						i2 ++;
					}
					cout << k2;
				}
			}
		}
	}
		{//NUMBERS - Prostie chisla
		if (StartNumbers == 2) {
			cout << "Write the number up to which you want to find out all the prime numbers:" << " ";
			cin >> number1;
			cout << endl;
			cout << "Result:" << " ";
				bool pointer;
				int i,j;
				for (i=2; i < number1; i ++) {
				pointer = true;
				for (j = 2; j < i; j ++)
				if (!(i % j)) { pointer = false; break; };
				if (pointer == true) cout << j<< " ";
			}
		}
	}
		{//Numbers - Deliteli
		if (StartNumbers == 3) {
			int a, delitel = 1;
			cout << "Welcome to number divisors!" << endl;
			cout << "Write the number for which you want to find out the divisors:" << " ";
			cin >> a;
			cout << endl;
			cout << "Result:" << " ";
			while (delitel <= a) {
				if (a % delitel == 0)
				cout << delitel << " ";
				delitel ++;
			}
		}
	}
		{//Support
		if (start == "Support") {
			cout << "Welcome to support!" << endl << endl;
			cout << "Version -" << " " << "1.1" << endl;
			cout << "About the update:" << endl;
			cout << "I added string mode, this means you can write words and not numbers" << endl << endl;
			cout << "If you have questions, find bugs or want me to add new features, write:" << endl;
			cout << "Telegram: https://t.me/+ucUDi8A5MjZjMGI6 (Support Helfer)" << endl << endl;
			cout << "Plans:" << endl;
			cout << "1." << " " << "upgrade calculator (2.0)" << endl << endl;
			cout << "I will support the program, release updates, add new features" << endl;
			cout << "So use it)";
		}
	}
		{//Exit
			if (start == "Exit"){
				cout << "See you next time my friend)";
				return 0;
			}
		}
	}
}    

