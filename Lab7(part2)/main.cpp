#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

double percentHeads(int times) {
    
    srand(4444);
    
    double numOf0 = 0.0;
    int rollresult;
    
    int i = 0;
    
    while ( i < times ) { 
        rollresult = rand () % 2;
    
        if (rollresult == 0) {
            numOf0++;
        }
        i++;
    }
    
    return 100 * numOf0 / times;
}

int main() {
    
    int userInput;
    
    cout << "Enter the number of times you want to toss the coin: ";
    cin >> userInput;
    cout << endl;
    
    cout <<"Heads came up " <<  percentHeads(userInput) << "% of the time." << endl;
    
    return 0;
}