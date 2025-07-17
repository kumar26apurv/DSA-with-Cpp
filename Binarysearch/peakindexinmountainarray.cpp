#include<iostream>
using namespace std;

int peakIndex(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<e)
    {
        if(arr[mid]<arr[mid+1])
        {
            s=mid+1;
        }
        else{
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}
int main()
{
    int arr[4]={0,2,1,0};
    int mou[5]={3,4,2,5,1};
    
    int mount1= peakIndex(arr,4);
    cout<<"peak element is at index "<<mount1<<endl;

    int mount2= peakIndex(mou,5);
    cout<<"peak element is at index "<<mount2<<endl;


    return 0;
}