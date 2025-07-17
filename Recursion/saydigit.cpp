#include<iostream>
using namespace std;

int sayDigit(int n,string arr[])
{
    //basecase
    if(n==0){
        return -1;
    }
    //processing
    int digit=n%10;
    n/=10;

    //this case pront in backward direction i.e. 412 in two one four
   // cout<<arr[digit]<<" ";

    //recursive call
    sayDigit(n,arr);

    //this case print in correct order i.e. 412 like four one two
    cout<<arr[digit]<<" ";


}
int main()
{
    string arr[10]={"zero","one","two","three",
                    "four","five","six",
                    "seven","eight","nine"};

    int n;
    cin>>n;
    // cout<<endl;
    sayDigit(n,arr);
    //cout<<endl<<endl<<endl;
}