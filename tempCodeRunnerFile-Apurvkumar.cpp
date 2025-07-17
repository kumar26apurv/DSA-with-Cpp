#include<iostream>
using namespace std;

int main()
{
    int num=5;

    cout<<num<<endl;

    //address of operator
    cout<<"address of num is "<< &num<< endl;

    int *ptr = &num;

    //value of num will be printed
    cout<<"value is: "<<*ptr<<endl;

    //value of address of num is printed
    cout<<"value is: "<<ptr<<endl;

    cout<<"size of integer is "<<sizeof(num)<<endl;
    cout<<"size of integer is "<<sizeof(*ptr)<<endl;
}