#include<iostream>
using namespace std;

int firstOcc(int arr[], int n, int key)
{
    int s=0,e=n-1;
    int mid=(s+e)/2;
    int ans= -1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            e=mid-1;
        }
        //right ma jao
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        //left ma jao
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int lastOcc(int arr[], int n, int key)
{
    int s=0,e=n-1;
    int mid=(s+e)/2;
    int ans= -1;

    while(s<=e)
    {
        if(arr[mid]==key)
        {
            ans=mid;
            s=mid+1;
        }
        else if(key>arr[mid])
        {
            s=mid+1;
        }
        else if(key<arr[mid])
        {
            e=mid-1;
        }
        mid=(s+e)/2;
    }
    return ans;
}

int main()
{
    int arr[7]={1,2,3,3,6,3,5};

    cout<<"first occurence is at "<<firstOcc(arr,7,3)<<endl;
    cout<<"last occurence is at "<<lastOcc(arr,7,3)<<endl;

    int firstIndex=firstOcc(arr,7,3);
    int lastIndex=lastOcc(arr,7,3);

    int occurence= (lastIndex-firstIndex)+1;
    cout<<"total no. of occurence is "<<occurence<<endl;
}