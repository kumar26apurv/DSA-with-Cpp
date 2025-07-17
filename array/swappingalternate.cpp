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

void swapAlternate(int arr[],int size)
{
    for(int i=0;i<size;i+=2)
    {
        if(i+1<size)
        {
            //swap(arr[i],arr[i+1]);
            int temp;
            temp=arr[i];
            arr[i]=arr[i+1];
            arr[i+1]=temp;
        }
    }
}

int main()
{
    int even[8]={5,3,6,4,8,1,9,2};
    int odd[5]={1,8,4,6,2};

    swapAlternate(even,8);
    printArray(even,8);

    swapAlternate(odd,5);
    printArray(odd,5);

    return 0;
}