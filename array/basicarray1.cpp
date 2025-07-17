#include<iostream>
using namespace std;

void printArray(int arr[], int size)
{
    cout<<"printing the array"<<endl;

    //printing the array
    for(int i=0; i<size; i++)
    {
        cout<< arr[i]<<" ";
    }
    cout<<endl;
    cout<<"Printing DONE"<<endl;
}

int main()
{
    //declare
    int number[15];

    cout<<"value at 14 index"<<number[14]<<endl;

    //initialization of aaray
    int second[3]={5,7,11};

    //accessing an element
    cout<<"value at 2 index " << second[2]<<endl;

    //initialization of another array
    int third[15]={2,7};
    
    int n=15;
   printArray(third,15);

   char  ch[]={'a','b','c','d','e'};
   cout<<ch[3]<<endl;

   cout<<"printing the array"<<endl;

    //printing the array
    for(int i=0; i<n; i++)
    {
        cout<< ch[i]<<" ";
    }

    cout<<endl;
    cout<<"Everything is Fine."<<endl;
    return 0;
}