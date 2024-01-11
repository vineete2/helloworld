#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
        int array1[] = {9,4,5,0,6,9,6,1};


        sort(array1,array1+8);

 for (auto i=0;i<8;i++)
    cout<<array1[i]<<" ";
cout<<endl;

  vector<int> vector1{9,4,5,8,3,7,2,6,0,1};

// we pass in as first and second arguments random access iterators that 
  // define a sequence of values
  sort(vector1.begin(), vector1.end());
  
  // output the vector values to verify sorting succeeded
  for (int value : vector1)
    cout << value << " ";
  cout << endl;  

    return 0;
}