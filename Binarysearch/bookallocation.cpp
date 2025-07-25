#include<iostream>
using namespace std;

bool isPossible(int arr[], int n, int m, int mid)
{
    int studentCount =1;
    int pageSum=0;

    for(int i=0;i<n;i++)
    {
        if(pageSum+arr[i]<=mid)
        {
            pageSum += arr[i];
        }
        else
        {
            studentCount++;
            if(studentCount>m || arr[i]>mid)
            {
                return -1;
            }
            pageSum=arr[i];
        }
    }
    return true;
}



int findPages(int arr[], int n, int m) {
    int s=0;
    int sum=0;

    for(int i=0;i<n;i++)
    {
        sum +=arr[i];
    }
    int e=sum;
    int ans=-1;
    int mid=(s+e)/2;

    while(s<=n)
    {
        if(isPossible(arr,n,m,mid))
        {
            ans=mid;
            e=mid-1;
        }
        else{
            s=mid+1;
        }
        mid=(s+e)/2;
    }
    return e;
}
int main()
{
    int arr[4]={10,20,30,40};

    //findPages(arr,4,2);
    cout<<"pages are"<< findPages(arr,4,2)<<endl;

}

