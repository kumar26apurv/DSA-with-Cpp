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

void sorttwo(int arr[],int n)
{
    int j=0,k=n-1;
    //int k=n-1;

    for(int i=0;i<n && i<=k;)
    {
        if(arr[i]==0)
        {
            swap(arr[j],arr[i]);
            i++;
            j++;
        }
        else if(arr[i]==2)
        {
            swap(arr[i],arr[k]);
            k--;
        }
        else{
            i++;
        }
    }
}

int main()
{
    int arr[8]={2,0,1,1,2,0,1,0};
    //int n = sizeof(arr) / sizeof(arr[0]);
    sorttwo(arr,8);
    printArray(arr,8);

    return 0;
}
