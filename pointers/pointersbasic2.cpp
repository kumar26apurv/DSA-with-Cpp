#include<iostream>
using namespace std;

int main()
{
    //pointer to int is created and pointing to some garbage collection
    //int *p=0;
    //cout<<*p <<endl;

    int i=5;

    int *q=&i;
    cout<<q<<endl;
    cout<<*q<<endl;

    int *p=0;
    p=&i;
    cout<<p<<endl;
    cout<<*p<<endl;
    

   int num=5;
   int a= num;
   a++;
   cout<<num<<endl;
   cout<<a<<endl;

   int*p=&num;
   cout<<"before "<<num<<endl;
   (*p)++;
   cout<<"after "<<num<<endl;

   //copying a pointer
   int *q=p;
   cout<<p<<"..."<<q<<endl;
   cout<<*p<<"..."<<*q<<endl;

   //important concept


   int i=1;
   int *t=&i;

   //whenever we usee pointer it gives the value of data at that particular instance
   cout<<"before "<<*t<<endl;
   //*t=*t+1; //0r
   //never increment pointer without giving braves i.e. *t++ is incorrrect
    (*t)++;
   cout<<"after "<<(*t)<<endl;

    //when we use pointer without * at that instance it gives the address value
   cout<<"before t "<<t<<endl;
   t=t+1;
   cout<<"after t "<<t<<endl;



    return 0;
}