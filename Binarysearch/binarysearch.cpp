#include<iostream>
using namespace std;

int binarySearch(int arr[],int size, int key)
{
    int start=0;
    int end=size-1;

    int mid=(start+end)/2;

    while(start<=end)
    {
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(key>arr[mid])
        {
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}

int main()
{
    int even[6]={2,4,6,8,10,13};
    int odd[5]={3,8,11,17,21};

    int evenIndex=binarySearch(even,6,15);

    cout<<"index is at "<< evenIndex<< endl;

    int oddIndex=binarySearch(odd,5,11);

    cout<<"index is at "<< oddIndex<< endl;
    
    return 0;
}