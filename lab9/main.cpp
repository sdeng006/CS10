#include <vector>
#include <cmath>
#include <iostream>

using namespace std;

void fillVector(vector<double>& list)
{
    double userDouble = 0.0;

    cout << "Enter numbers to populate the vector ";
    cout << "(enter any other character to end user input): "; 

    while (cin >> userDouble) {
      list.push_back(userDouble);
    }
    cout << endl;

    return;
}

double meanVector(const vector <double>& v) {
    
    double total = 0.0;
    
    for(unsigned int i = 0; i < v.size() ; i++) {
        total = total + v.at(i);
    }
    
    double mean = total / v.size();
    
   return mean;
}

double varianceVector(double vectorAvg, const vector <double>& v) {

   double total = 0.0;
    
    for(unsigned int i = 0; i < v.size() ; i++) {
        total = total + pow(vectorAvg - v.at(i), 2.0);
    }
    
    double variance = total/v.size();
    
   return variance;
}

double standardDeviationForVariance(double vectorVariance) {

   
   return sqrt (vectorVariance);
}

int main() {
   vector<double> inputList(0);
   double avg = 0.0;
   double var = 0.0;
   double stdDev = 0.0;
   unsigned int i = 0;

   fillVector(inputList);

   cout << "You entered: ";
   
   for (i = 0; i < inputList.size() ; i++) {
       cout << inputList.at(i) << ' ';
   }
    cout << endl;
    
    
   avg = meanVector(inputList);

   var = varianceVector(avg, inputList);

   stdDev = standardDeviationForVariance(var);

   cout << "The mean is: " << avg << endl;
   cout << "The variance is: " << var << endl;
   cout << "The standard deviation is: " << stdDev << endl;

   return 0;
}