#include<iostream>
using namespace std;

int power(int a,int b)
{
    //BASE CALL
    if(b==0){
        return 1;
    }
    if(b==1){
        return a;
    }
    //RECURSIVE CALL
    int ans=power(a,b/2);

    //IF b IS EVEN
    if(b%2==0){
        return ans*ans;
    }
    else{
        //IF b IS ODD
        return a*ans*ans;
    }

}

int main()
{
    int a,b;
    cin>>a>>b;

    int ans=power(a,b);
    cout<<"Answer is "<<ans<<endl;
}