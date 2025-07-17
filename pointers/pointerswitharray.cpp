#include<iostream>
using namespace std;

int main()
{   
    int arr[10]={10};

    cout<<"address of 1st memory block is "<<arr<<endl; //&arr[0] since both ways show the zeroth index of array
    cout<<arr[0]<<endl;
    cout<<"address of 1st memory block is "<<&arr[1]<<endl;

    cout<<"4th "<<*arr<<endl;
  







    return 0;
}