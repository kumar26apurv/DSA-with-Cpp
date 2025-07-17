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

void insertsort(int arr[], int n)
{
      for(int i=1;i<n;i++)
    {
        int j=i-1;
        int temp=arr[i];
        for(;j>=0;j--)
        {
            if(arr[j]>temp){
                arr[j+1]=arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1]=temp;
    }
}

int main()
{
    int arr1[8]={5,3,6,4,8,1,9,2};
    int arr2[7]={10,1,7,4,8,2,11};

    insertsort(arr1,8);
    printArray(arr1,8);

    insertsort(arr2,7);
    printArray(arr2,7);

    return 0;
}