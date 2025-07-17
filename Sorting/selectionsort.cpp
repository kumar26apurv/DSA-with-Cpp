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

void selectsort(int arr[], int n)
{
     
    for(int i=0;i<n-1;i++)
    {
        int minIndex=i;

        for(int j=i+1;j<n;j++)
        {
            if(arr[j]<arr[minIndex]){
            minIndex=j;
            }
        }
        swap(arr[minIndex],arr[i]);
    }
}
int main()
{
   int arr1[8]={5,3,6,4,8,1,9,2};
    int arr2[5]={1,8,4,6,2};

    selectsort(arr1,8);
    printArray(arr1,8);

    selectsort(arr2,5);
    printArray(arr2,5);

    return 0;
}