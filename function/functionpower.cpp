//finding power using function

#include<iostream>
using namespace std;

int power(int num1, int num2)
   {
        int ans=1;
        for(int i=1;i<=num2;i++)
        {
            ans=ans*num1;
        }
        return ans;
    }
    
    
int main()
{
    int a , b;
    cin>>a>>b;
   int answer= power(a,b);
   cout<<"Answer is:"<<answer<<endl;

   int c , d;
    cin>>c>>d;
    answer = power(c,d);
    cout<<"Answer is:"<<answer<<endl;

    int e , f;
    cin>>e>>f;
    answer = power(e,f);
    cout<<"Answer is:"<<answer<<endl;


    //return 0;
    
}



