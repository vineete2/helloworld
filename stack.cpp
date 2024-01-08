#include<iostream>
#include<stack>

using namespace std;

int main(){
stack<int> stack;
stack.push(21);
stack.push(1);
stack.push(31);
stack.push(41);

while(!stack.empty())
{
cout<<stack.top()<<endl;
stack.pop();

}

}