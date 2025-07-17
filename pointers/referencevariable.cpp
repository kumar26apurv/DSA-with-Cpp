#include<iostream>
using namespace std;

int& func(int a){
    int num=a;
    int& ans=num;
    return ans;
}

void update2(int& n){
    n++;
}

void update1(int n){
    n++;
}


int main()
{
   /* int i=5;
    int &j=i;
    cout<<i<<endl;
    i++;
    cout<<i<<endl;
    j++;
    cout<<i<<endl;

    return 0;
    */

   int n=5;
   cout<<"begore "<<n<<endl;
   update2(n);
   cout<<"after "<<n<<endl;

   cout<<func(n)<<endl;;

   return 0;
}