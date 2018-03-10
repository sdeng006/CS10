#include <iostream>
using namespace std;
int main()
{
    
    cout << "Enter trunk height: Enter trunk width: Enter leaves width: " << endl;
    
    int trunkHeight;
    int trunkWidth;
    int leavesWidth;
    cin >> trunkHeight;
    cin >> trunkWidth;
    cin >> leavesWidth;
    
    int leavesHeight;
    leavesHeight = leavesWidth/2 + 1;
    int trunkSpace;
    trunkSpace = (leavesWidth-trunkWidth)/2;
    
    int leavesLength = 0;
    int trunkLength = 0;
    int j = 0;
    int i = 0;
    
    for(i=1;i<=leavesHeight;++i)
    {
        for(int space=leavesHeight;space>i;--space)
        {
           cout<<" ";
        }
        for(leavesLength=0;leavesLength != (2*i-1);++leavesLength)
        {
           cout<<"*";
        }
        cout<< endl;
    }
    
    for (j=1; j <=trunkHeight; ++j) {
      for (int tree = 1; tree <= trunkSpace; tree++) {
            cout << " ";
            }
        for(trunkLength=0;trunkLength < trunkWidth;++trunkLength)
        {
           cout<<"*";
        }
       cout << endl;
    }

    return 0;
}