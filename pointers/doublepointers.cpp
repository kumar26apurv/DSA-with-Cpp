#include<iostream>
using namespace std;

void update(int **p){

    //kuch chamh=ge ni hoga
    //p=p+1;

    //p ki address ma change hoga
   // *p=*p+1;

   //i ka vlaue ma  change hoga
    **p=**p+1;
}

int main()
{
    /*
    int i=5;
   int *p=&i;
    int **p2=&p;
    
    cout<<"sb sahi chll rha ha "<<endl;

    cout<<"printing p "<<p<<endl;
    cout<<"address of p "<<&p<<endl;

    cout<<"address of p2 "<<*p2<<endl;

    //three wayss to print same value not address its value
    cout<<i<<endl;
    cout<<*p<<endl;
    cout<<**p2<<endl;

    //three ways to print same address
    cout<<&i<<endl;
    cout<<p<<endl;
    cout<<*p2<<endl;

    //another way to print address nut its different from above 
    cout<<&p<<endl;
    cout<<p2<<endl;
    

   cout<<"before "<<i<<endl;
   cout<<"before "<<p<<endl;
   cout<<"before "<<p2<<endl;
   update(p2);
   cout<<"after "<<i<<endl;
   cout<<"after "<<p<<endl;
   cout<<"after "<<p2<<endl;
    */

   /*int first=8;
   int second =18;
    int *ptr=&second;
    *ptr=9;
    cout<<first <<" "<<second<<endl;
    */

   /*int first=6;
   int *p=&first;
   int *q=p;
    (*q)++;
    cout<<first <<endl;
    */

   /*int first=8;
   int *p=&first;
    cout<<(*p)++<<endl;
    cout<<first<<endl;
    */

   /*int *p=0;
   int first=110;
    p=&first;
   cout<<*p<<endl;
   */

  /*int first=8;
  int second=11;
  int *third=&second;
  first=*third;
  *third +=2;
  cout<<first <<" "<<second<<endl;  
  */

 

    return 0;
}