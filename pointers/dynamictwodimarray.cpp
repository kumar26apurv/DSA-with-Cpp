#include<iostream>
using namespace std;
int main()
{   
    //for same no. of rows and columns
    //int n;
    //cin>>n;

    //for differrent no. of rows and columns
    int row;
    cin>>row;

    int col;
    cin>>col;

    //creating a 2D array
    int** arr=new int*[row]; //row=n for same
    for(int i=0;i<row;i++)
    {
        arr[i]=new int [col];  //col=n  for same
    }
    //taking input
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cin>>arr[i][j];
        }
    }
    cout<<endl;
    //taking output
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    //releasing memory
    for(int i=0;i<row;i++)
    {
        delete [] arr[i];
    }
    delete []arr;
}