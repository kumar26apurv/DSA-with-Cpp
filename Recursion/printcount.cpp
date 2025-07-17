#include<iostream>
using namespace std;

int print(int n)
{
    if(n==0){
        return -21;
    }
    //cout<<n<<endl; //it will print n,n-1,n-2,n-3,n-4,............,1
    print(n-1);
    cout<<n<<endl;//it will print 1,2,3,4,5,.......,n
}
int main()
{
    int n;
    cin >>n;

    cout<<endl;
    print(n);

    return 0;
}