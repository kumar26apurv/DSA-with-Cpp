#include<iostream>
using namespace std;

void print(int arr[],int n)\
{
    cout<<"size of array is "<<n<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

bool linearSearch(int*arr,int size,int k)
{
    print(arr,size);
    //basecase
    if(size==0){
        return false;
    }
    if(arr[0]==k){
        return true;
    }
    else{
        bool remainingPart=linearSearch(arr+1,size-1,k);
        return remainingPart;
    }
}
int main()
{
    int arr[5]={3,5,2,1,6};
    int size=5;
    int key=6;
    bool ans=linearSearch(arr,size,key);

    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Absent"<<endl;
    }
    return 0;
}