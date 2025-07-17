#include<iostream>
using namespace std;

//default argument is basically value dena ha to do ni to gand marao i'm self sufficient wala haal ha
void print(int arr[],int n, int start=0)//here start=0 is a default argument
{
    for(int i=start;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
int main()
{
    int arr[5]={1,3,4,5,6};
    int size =5;

    print(arr,size);
    cout<<endl;
    print(arr,size,2);
}