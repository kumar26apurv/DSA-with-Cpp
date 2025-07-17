
#include<iostream>
using namespace std;

//printing fibonnnaci series
/*
int main()
{
    int n;
    cout<<"enter the value of n"<<endl;
    cin>>n;

    int a=0;
    int b=1;
    cout<<a<<" "<<b<<" ";
    for(int i=1; i<=n; i++)
    {
        int nextnumber= a+b;
        cout<<nextnumber<<" ";

        //swapping numbers
        a=b;
        b=nextnumber;
    }
*/

//printing nth term of fibonnaci series

int fibon(int n)
{
    int a=0,b=1,c;
    if(n==0)
    return a;

    for(int i=2;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}
int main()
{
    int n;
    cin>>n;
    cout<<"Nth term is: "<<fibon(n)<<endl;
}
