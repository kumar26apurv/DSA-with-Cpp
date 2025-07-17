#include<iostream>
#include<queue>

using namespace std;
int main()
{
     queue<string>  q;

    q.push("apurv");
    q.push("kumar");
    q.push("gupta");

    cout<<"first element: "<<q.front()<<endl;
    q.pop();
    cout<<"first element: "<<q.front()<<endl;

    
    cout<<"size of queue "<<q.size()<<endl;
    cout<<"empty or not "<<q.empty()<<endl;

}