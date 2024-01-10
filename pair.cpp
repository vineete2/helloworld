

// CPP program to illustrate Pair in STL
#include <iostream>
#include <utility>
using namespace std;

int main()
{
pair<int,char> pair11;

pair11.first=100;
pair11.second='f';

cout<<pair11.first<<" ";
cout<<pair11.second<<endl;

pair<int, double> PAIR1;
    pair<string, char> PAIR2;
 
    // it is initialised to 0
    cout << PAIR1.first; 
   
    // it is initialised to 0
    cout << PAIR1.second; 
 
    cout << " new line"<<endl;
 
    // // it prints nothing i.e NULL
    cout << PAIR2.first; 
     
    // it prints nothing i.e NULL
    cout << PAIR2.second; 


return 0;

}