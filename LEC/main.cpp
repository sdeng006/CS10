#include <iostream>
using namespace std;

int main() {
    
cout << "Enter positive integers (-1 to quit): ";
int entry;
int sum = 0;
cin >> entry;
do {
   sum += entry;
   cin >> entry;
} while (entry >= 0);

cout << sum;
    
    return 0;
}