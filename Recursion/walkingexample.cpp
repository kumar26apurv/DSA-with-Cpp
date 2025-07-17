#include<iostream>
using namespace std;

int reachhome(int src,int dest)
{
    //src->source and dest-> destination
   //base case
   if(src==dest){
    cout<<"pahuch gya"<<endl;
    return 0;
   }
   //processing -> ek step aage bdho
   src++;
   //recursive call
   reachhome(src,dest);
}
int main()
{
    int dest=10;
    int src=1;

    reachhome(src,dest);

    return 0;
}