//pivot elements means from where the giver array is being rotated
//in other words pivot means a sorted array is being rotated at some time

#include<iostream>
using namespace std;

int getpivot(int arr[],int n)
{
    int s=0;
    int e=n-1;
    int mid=(s+e)/2;

    while(s<e)
    {
        if(arr[mid]>= arr[0])
        {
            s=mid+1;
        }
        else
        {
            e=mid;
        }
        mid=(s+e)/2;
    }
    return s;
}

 int main()
 {
    //sorted and rotated array is given
    int arr[6]={8,10,17,19,1,3};

    cout<<"pivot  is "<<getpivot(arr,6)<<endl;
 }