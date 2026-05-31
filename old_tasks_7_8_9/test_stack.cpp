#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
    string function;
    string comandPush = "push ";
    //int value;
    // const int size = 100;
    // int j = 0;
    stack<int> s;
    while (true) {
        getline(cin, function);
        int res = function.find("push");
        if (res != string::npos)
            function.erase(0, comandPush.size());
      	    cout << endl << function;
        // if () {
        //     cin >> value; 
        //     s.push(value);
        //     //j++;
        //     // cout << j << endl;
        // } else {
        //     // string function2;
        //     // cin >> function2;

        //     if (function == "pop") {
        //         cout << s.top();
        //         s.pop();
        //         // j--;
        //     }
        // }
    }
    

}