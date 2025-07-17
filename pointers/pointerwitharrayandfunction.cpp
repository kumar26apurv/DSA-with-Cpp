#include<iostream>
using namespace std;

void print(int *p){
    cout<<p<<endl;  //address print
    cout<<*p<<endl; //valuue print
}

void update(int *p){
    //p=p+1; //address return will be same in both but in main function we have to write p not *p
    *p=*p+5;  //return value
}
int getSum(int *arr,int n){   //*arr=arr[] both are same or we can say when we declare arr[], we basically declare pointer value

    int sum=0;
    for(int i=0;i<n;i++){
        sum +=arr[i];
    }
    return sum;
}

int main()

{
    //int arr[10]={23,122,41,67};
    /*
    //getting address of memory at 1st location only
    cout<<"address of 1st memory block "<<arr<<endl;

    cout<<"address of 1st memory block "<<&arr[0]<<endl;

    cout<<"4th "<<*arr<<endl;
    cout<<"5th "<<*arr+1<<endl;
    cout<<"6th "<<*(arr+1)<<endl;
    cout<<"7th "<<*(arr)+1<<endl;
    cout<<"8th "<<arr[2] <<endl;

    int i=3;

    cout<<i[arr]<<endl;
    
   int temp[10];
   cout<<sizeof(temp)<<endl;
   cout<<sizeof(*temp)<<endl;
   int *ptr= &temp[0];
   cout<<sizeof(ptr)<<endl;
   cout<<sizeof(*ptr)<<endl;
   cout<<sizeof(&ptr)<<endl;
    


   int a[20]={1,2,3,5};
   cout<<&a[0]<<endl;
   cout<<&a<<endl;
   cout<<a<<endl;

    int *p= &a[0];
    cout<<p <<endl;
    cout<<*p<<endl;
    cout<<&p<<endl;
    */

   /*int brr[10];

   //will give error
        // brr=brr+1;


    int *ptr = &brr[0];
    cout<<ptr<<endl;
    ptr=ptr+1;
    cout<<ptr<<endl;
    

   int value=5;
    int*p=&value;
    print (p);

    cout<<"before "<<*p<<endl;
    update (p);
    cout<<"after "<<*p<<endl;
    */

    int arr[6]={1,2,3,4,5,8};
    cout<<"sum is "<<getSum(arr+3,3)<<endl;

    return 0;
}