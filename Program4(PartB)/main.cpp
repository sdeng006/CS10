#include <iostream>
#include <string>
using namespace std;

int main() {
    
    int i=0;
    string userInput;
    string output;
    getline(cin, userInput);
    output = userInput;
    
    cout << "Enter text: " << endl;
    cout << "You entered: " << userInput << endl;
    
    if (output.find("BFF") != string::npos) {
        i = output.find("BFF");
        output.replace(i, 3, "best friend forever");
    }
    if (output.find("IDK") != string::npos) {
        i = output.find("IDK");
        output.replace(i, 3, "I don't know");
    }
    if (output.find("JK") != string::npos) {
        i = output.find("JK");
        output.replace(i, 2, "just kidding");
    }
    if (output.find("TMI") != string::npos) {
        i = output.find("TMI");
        output.replace(i, 3, "too much information");
    }
    if (output.find("TTYL") != string::npos) {
        i = output.find("TTYL");
        output.replace(i, 4, "talk to you later");
    }
    
    cout << "Expanded: " << output << endl;
    
    return 0;
}