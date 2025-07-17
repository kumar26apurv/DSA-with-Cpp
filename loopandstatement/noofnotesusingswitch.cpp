//c++ program to find the number of different notes required for
// a particular amount


#include<iostream>
using namespace std;
 
int main()
{
    int amount = 2595;
    int n100=0,n50=0,n10=0,n1=0;
    
     switch(amount>=100)
    {
        case 1:
        n100=amount/100;
        amount -= n100*100;
        break;
    }

     switch(amount>=50)
    {
        case 1:
        n50=amount/50;
        amount -= n50*50;
        break;
    }

     switch(amount>=10)
    {
        case 1:
        n10=amount/10;
        amount -= n10*10;
        break;
    }
    
    
     switch(amount>=1)
    {
        case 1:
        n1=amount/1;
        amount -= n1*1;
        break;
    }
    cout<<"100="<<n100<<endl;
    cout<<"50="<<n50<<endl;
    cout<<"10="<<n10<<endl;
    cout<<"1="<<n1<<endl;
}
