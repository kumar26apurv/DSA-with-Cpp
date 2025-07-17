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

void bubblesort(int arr[], int n)
{
     
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++){

            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
      
       }
    }
}

int main()
{
   int arr1[8]={5,3,6,4,8,1,9,2};
    int arr2[5]={1,8,4,6,2};

    bubblesort(arr1,8);
    printArray(arr1,8);

    bubblesort(arr2,5);
    printArray(arr2,5);

    return 0;
}