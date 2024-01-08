#include<iostream>
#include<string>
#include<array>
#include<vector>

using namespace std;

void printArray(string items[],int size) //items array is pointer to first element in memory so we can't use size of items
{
    for(int i=0;i<size;i++)
    {
        cout<<items[i]<<endl;
    }
}

void printSTDArray(array<string,5> items)
{
    for(int i=0;i<items.size();i++)
    {
        cout<<items[i]<<endl;
    }
}

void printvector(vector<string> items)
{
    for(int i=0;i<items.size();i++)
    {
        cout<<items[i]<<endl;
    }
}

int main()
{  
    string foods1[5]={"grapes","Apples","lemons","pizza","carrots"};
        printArray(foods1,sizeof(foods1)/sizeof(foods1[0])); //size in memory divided by type of element
    array<string,5> foods3 ={"grapes","Apples","lemons","pizza","carrots"};
        printSTDArray(foods3);

    vector<string> foods2;
        foods2={"grapes","Apples","lemons","pizza","carrots"};
        foods2.push_back("Bread");
        printvector(foods2);
    // for(int i=0;i<foods2.size();i++)
    // {
    //     cout<<foods2[i]<<endl;
    // }

    // for(auto food:foods3)
    // {

    //     cout<<food<<endl;
    // }

system("pause");
return 0;

}