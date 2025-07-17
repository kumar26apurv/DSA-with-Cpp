#include<iostream>
using namespace std;

int getMIN(int num[], int n)
{
    int min;

    for(int i=0; i<n; i++)
    {
        if(num[i]<min)
        {
            min=num[i];
        }
    }
    //returning min value
    return min; 
}

int getMAX(int num[], int n)
{
    int max;

    for(int i=0; i<n; i++)
    {
        if(num[i]>max)
        {
            max=num[i];
        }
    }
    //returning max value
    return max;
}

int main()
{
    int size;
    cin>>size;

    int num[100];

    //taking input in array
    for(int i=0;i<size;i++)
    {
        cin>>num[i];
    }
    cout<<"Maximum value is:"<<getMAX(num,size)<<endl;
    cout<<"Minimum value is:"<<getMIN(num,size)<<endl;
    return 0;
}