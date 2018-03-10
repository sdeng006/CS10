#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    string abbreviation;
    string theMeaning;
    cin >> abbreviation;
    
    if (abbreviation == "LOL") {
        theMeaning = "laughing out loud";
    }
    else if (abbreviation == "IDK") {
        theMeaning = "I don't know";
    }
    else if (abbreviation == "BFF") {
        theMeaning = "best friends forever";
    }
    else if (abbreviation == "IMHO") {
        theMeaning = "in my humble opinion";
    }
    else if (abbreviation == "TMI") {
        theMeaning = "too much information";
    }
    else {
        theMeaning = "Unknown";
    }
    
    cout << "Input an abbreviation: " << endl;
    cout << theMeaning << endl;
    
    return 0;
}