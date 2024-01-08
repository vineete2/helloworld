#include<iostream>
#include<tuple>

using namespace std;

int main()
{
    // Declaring tuple
 tuple <int, char, float> geek;
   
    // // Assigning values to tuple using make_tuple()
    geek = make_tuple(10,'f', 15.5);
    // Printing initial tuple values using get()
    cout<<"the intial values : ";
     cout << get<0>(geek) << " " << get<1>(geek)
          << " " << get<2>(geek) << endl;
    // Use of get() to change values of tuple
    get<1>(geek) = 'b';
    get<2>(geek) =  20.5;


    // Printing initial tuple values using get()
    cout<<"the final values : ";
        cout << get<0>(geek) << " " << get<1>(geek)<< " " 
             << get<2>(geek) << endl;
    return 0;

}