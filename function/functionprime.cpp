#include<iostream>
using namespace std;

/*
void printCounting(int n)
{
    for(int i=1;i<=n;i++)
    {
        cout<<i<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    printCounting(n);
    return 0;

}
*/
bool isPrime(int n)
{
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            return 0;
        }
    }
    return 1;
}
int main()
{
    int n;
    cin>>n;
    if(isPrime(n))
    {
        cout<<"is a prime number"<<endl;
    }
    else{
    cout<<"not a prime number"<<endl;
    }
}
