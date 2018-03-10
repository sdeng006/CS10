#include <iostream>
using namespace std;

int add (int numOne, int numTwo) {
    return numOne + numTwo;
}

int subtract (int numthree, int numfour) {
    
    int sucking = numthree - numfour;
    
    return sucking;
}

int main() {
   int num1 = 0;
   int num2 = 0;
   int sum = 0; //sum of numbers
   int diff = 0; //difference of numbers

   cin >> num1;
   cin >> num2;

   // Call add function
   sum = add(num1, num2);
   diff = subtract(num1, num2);

    cout << "Enter the first integer: Enter the second integer: "<< endl << endl;
    cout << "First Integer: " << num1 << endl;
    cout << "Second Integer: " << num2 << endl << endl;
    
   cout << num1 << " + " << num2 << " = " << sum << endl;
   cout << num1 << " - " << num2 << " = " << diff << endl;


   // FIXME (8) Output result of num1 - num2


   return 0;
}