#include <iostream>
#include <cmath>
using namespace std;

int main() {

    double x1 = 0.0;
    double y1 = 0.0;
    double x2 = 0.0;
    double y2 = 0.0;
    double numDistance;
    
    cin >> x1;
    cin >> y1;
    cin >> x2;
    cin >> y2;
    
    numDistance = sqrt ((pow ((x2 -x1) , 2.0)) + pow ((y2 - y1) , 2.0));
    
    cout << "Distance :" << numDistance << endl;

    return 0;
}