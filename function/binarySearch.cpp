#include<iostream>
using namespace std;

void print(int arr[],int s,int e)
{
    //cout<<"size of array is "<<n<<endl;
    for(int i=s;i<=e;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool binarySearch(int*arr,int s,int e,int k)
{
    print(arr,s,e);
    //base case
    if(s>e){
        return false;
    }
    
    int mid=(s+e)/2;
    cout<<"value of mid is "<<mid<<endl;

    if(arr[mid]==k){
        return true;
    }
    if(arr[mid]<k){
        return binarySearch(arr,mid+1,e,k);
    }
    else{
        return binarySearch(arr,s,mid-1,k);
    }
}
int main()
{
    int arr[6]={2,4,6,10,14,16};
    int size=6;
    int key=18;

    cout<<"element present:"<<binarySearch(arr,0,size-1,key);


    return 0;
}