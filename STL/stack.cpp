#include<iostream>
#include<stack>

using namespace std;
int main()
{
    stack<string>  s;

    s.push("apurv");
    s.push("kumar");
    s.push("gupta");

    cout<<"top element: "<<s.top()<<endl;

    s.pop();
    cout<<"top element: "<<s.top()<<endl;

    cout<<"size of stack "<<s.size()<<endl;
    cout<<"empty or not"<<s.empty()<<endl;



}