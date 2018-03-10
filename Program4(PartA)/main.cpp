#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main() {
    
    string userInput;
    getline(cin, userInput);
    
    cout << "Enter text: " << endl;
    cout << "You entered: " << userInput << endl;
    
    if (userInput.find("BFF") != std::string::npos) {
        cout << "BFF: best friend forever" << endl;
    }
    if (userInput.find("IDK") != std::string::npos) {
        cout << "IDK: I don't know" << endl;
    }
    if (userInput.find("JK") != std::string::npos) {
        cout << "JK: just kidding" << endl;
    }
    if (userInput.find("TMI") != std::string::npos) {
        cout << "TMI: too much information" << endl;
    }
    if (userInput.find("TTYL") != std::string::npos) {
        cout << "TTYL: talk to you later" << endl;
    }
    return 0;
}