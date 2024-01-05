#include<iostream>
#include<string>
#include<array>
#include<vector>

using namespace std;

int main()
{  
    array<string,3> foods ={"grapes","Apples","lemons"};
    string foods3[3]={"grapes","Apples","lemons"};

    vector<string> foods2;
        foods2={"grapes","Apples","lemons"};
        foods2.push_back("Bread");

    for(int i=0;i<foods2.size();i++)
    {
        cout<<foods2[i]<<endl;
    }

    for(auto food:foods3)
    {

        cout<<food<<endl;
    }

system("pause");
return 0;

}