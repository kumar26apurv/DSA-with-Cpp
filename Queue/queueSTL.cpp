#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int>q;

    q.push(11);
    q.push(15);

    q.push(13);

    cout<<q.front()<<endl;

    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;

    cout<<q.size()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    q.pop();
    cout<<q.front()<<endl;
    if(q.empty())
    {
        cout<<"Queue is Empty."<<endl;
    }
    else{
        cout<<"Queue is not Empty."<<endl;
    }

    return 0;
}