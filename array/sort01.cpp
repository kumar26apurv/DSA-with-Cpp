#include<iostream>
using namespace std;

void printArray(int arr[],int n)
{
     for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void sortone(int input[],int n)
{
     int i=0;
    int j=n-1;

    while(i<j)
    {
    while(input[i]==0)
    {
        i++;
    }
    while(input[j]==1)
    {
        j--;
    }
    if (input[i] == 1 && input[j] == 0 && i<j) {
        swap(input[i], input[j]);
        i++;
        j--;
    }
   // return swap;
    }
}

int main()
{
    int arr[8]={1,0,0,1,1,1,0,0};
    sortone(arr,8);
    printArray(arr,8);
}