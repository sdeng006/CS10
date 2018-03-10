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
    
    for (i = output.find("BFF");i>=0; i = output.find("BFF")) {
        output.replace(i, 3, "best friend forever");
    }
    for (i = output.find("IDK");i>=0; i = output.find("IDK")) {
        output.replace(i, 3, "I don't know");
    }
    for (i = output.find("JK");i>=0; i = output.find("JK")) {
        output.replace(i, 2, "just kidding");
    }
    for (i = output.find("TMI");i>=0; i = output.find("TMI")) {
        output.replace(i, 3, "too much information");
    }
    for (i = output.find("TTYL");i>=0; i = output.find("TTYL")) {
        output.replace(i, 4, "talk to you later");
    }
    
    cout << "Expanded: " << output << endl;
    
    return 0;
}