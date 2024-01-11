#include<iostream>
#include<vector>
#include <algorithm>

using namespace std;

int main()
{

vector<int> data ={9,1,1,2,2,2,4,4,2,2,2,11,4,4,6,6,12,12};

for(auto it = data.begin(); it!=data.end();it++)
    cout<<*it<< " ";
cout<<endl;

cout <<"before size: "<<data.size()<<endl;

auto new_end= unique(data.begin(), data.end());


cout<<"After: ";

for(auto it = data.begin(); it!=new_end;it++)
    cout<<*it<< " ";
cout<<endl;

cout <<"after size: "<<data.size()<<endl;


return 0;
}