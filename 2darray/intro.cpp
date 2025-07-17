#include<iostream>
using namespace std;

bool isPresent(int  arr[][3],int target,int row,int col)
{
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
    }
    return 0;
}

//col wise sum
void printSum1(int arr[][3],int row,int col)
{
    cout<<"printing sum-> "<<endl;   
   for(int col=0;col<3;col++){
    int sum=0;
        for(int row=0;row<3;row++){
            sum +=arr[row][col];
        } 
        cout<<sum<<" ";
}
cout<<endl;
}

//row wise sum
void printSum2(int arr[][3],int row,int col)
{
    cout<<"printing sum-> "<<endl;   
   for(int row=0;row<3;row++){
    int sum=0;
        for(int col=0;col<3;col++){
            sum +=arr[row][col];
        } 
        cout<<sum<<" ";
}
cout<<endl;
}

int largestRowSum(int arr[][3],int row,int col)
{
    int maxi=0;
    int rowindex=-1;

    for(int row=0;row<3;row++)
    {
         int sum=0;
        for(int col=0;col<3;col++)
        {
            sum +=arr[row][col];
        } 
        if(sum>maxi){
            maxi=sum;
            rowindex=row;
        }
    }
    cout<<"the maximum sum is-> "<<maxi<<endl;
    return rowindex;
}

int main()
{
    //create 2d array
    //int arr[3][4]={1,2,3,4,5,6,7,8,9,10,14,16};
    int arr[3][3];

    cout<<"enter the elements "<<endl;

    //taking input row wise
    for(int row=0;row<3;row++){
        for(int col=0;col<3;col++){
            cin>>arr[row][col];
        }
    }
    /*
    //taking input column wise
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    */

    cout<<"printing the array "<<endl;

      //print
    for(int row=0;row<4;row++){
        for(int col=0;col<3;col++){
            cout<<arr[row][col]<<" ";
        }
        cout<<endl;
    }
    

    cout<<"enter the element to search"<<endl;
    int target;
    cin>>target;

    if(isPresent(arr,target,3,3)){
        cout<<"element found."<<endl;
    }
    else{
        cout<<"not found."<<endl;
    }
    printSum2(arr,3,3);
    printSum1(arr,3,3);

    int ansIndex=largestRowSum(arr,3,3);
    cout<<"max row sum is at index-> "<<ansIndex<<endl;
}