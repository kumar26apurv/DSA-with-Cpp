#include<iostream>
using namespace std;

/*void printArray(int arr[],int n)
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
*/

int findunique(int arr[],int size)
{
    int ans=0;
    for(int i=0;i<size;i++)
    {
        ans=ans^arr[i];
    }
    return ans;
}

int main()
{
    int arr[7]={1,4,2,4,5,1,5};
    int brr[5]={7,3,5,3,5};

   // int size=sizeof(arr)/sizeof(arr[0]);

    
    // printArray(arr,7);
    int uniquevalue= findunique(arr,7);
    cout<<"unique value of the array is: "<<uniquevalue<<endl;

    int uniqueval=findunique(brr,5);
   cout<<"unique value of the array is: "<<uniqueval<<endl;




   // findunique(brr,5);
   // printArray(brr,5);

    return 0;
}