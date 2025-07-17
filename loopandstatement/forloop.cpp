#include <iostream>
using namespace std;
int main()

{
   /* int a,b=1;
    a=10;
    if(++a)
    cout<<b;
    else
    cout<<++b;
    */

   /*int a=1;
   int b=a++;
   int c=++a;
   cout<<b<<endl;
   cout<<c<<endl;
    */

   int n;
   cin>>n;

   //for(int i=1;i<=n;i++)
   //{
    //cout<<i;
   //}
    for(int a=0,b=1,c=2; a>=0 && b>=1 && c>=2; a--, b--, c--)
    {
        cout<<a<<" "<<b<<" "<<c<<" "<<endl;
    }


}
