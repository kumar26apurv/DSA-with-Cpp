#include<iostream>
using namespace std;

//printing AP series

int printAP(int a,int d, int n)
{
    int first_term=a;
    for(int i=1; i<=n; i++)
    {
        cout<<first_term<<" ";
        first_term=first_term+d;
    }
}
/*
int main()
{
    int a,d,n;
    cin>>a>>d>>n;
    printAP(a,d,n);
}
*/

//printing last term

int last_term(int a, int d, int n)
{
    int first_term=a;
    int ans= first_term + (n-1)*d;
    return ans;
}
int main()
{
    int a,d,n;
    cin>>a>>d>>n;
    cout<<"Last term is: "<<last_term(a,d,n)<<endl;
     printAP(a,d,n);
}
