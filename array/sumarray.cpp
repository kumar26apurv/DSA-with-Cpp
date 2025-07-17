#include<iostream>
using namespace std;

int sum(int arr[],int n) 
{
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum=sum+arr[i];
    }
    return sum;
}

int main()
{
    int size;
    cout<<"enter the size of array"<<endl;
    cin>>size;

    int arr[size];
    for(int i=0;i<size;i++)
    {
        //cout<<"Enter value"<<endl;
        cin>>arr[i];
    }
    cout<<"sum of array is"<<sum(arr,size);
    return 0;
}