#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    //taking another variable
    bool isprime=1;

    for(int i=2; i<n; i++)
    {
        //not a prime number
        if(n%i==0)
        {
            //printing result
            //cout<<"not a prime number"<<endl;
            isprime=0;
            break;
        }
    }
    if(isprime==0)
    {
        cout<<"not a prime number"<<endl;
    }
    else
    {
        cout<<"is a prime number"<<endl;
    }
}