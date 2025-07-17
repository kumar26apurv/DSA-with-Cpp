#include<iostream>
using namespace std;
int main()
{
    int  num=3;

    cout<<endl;
    switch(num)
    {
        case 1: cout<<"first"<<endl;
            break;

        case 2: cout<<"second"<<endl;
            break;

        case 3: cout<<"third"<<endl;
            break;

        default: cout<<"It is default case."<<endl;    
    }
    cout<<endl;
}