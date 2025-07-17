#include<iostream>
using namespace std;

//global variable declaration

//global variable come in bad practice as it can be change by any one
//insted of it use reference variable
int score=15;

void a(int& i)
{
    cout<<score<<"in a"<<endl;
    char ch='a';
    cout<<i<<endl;
}
void b(int& i)
{
    cout<<score<<"in b"<<endl;
    i=i+1;
    cout<<i<<endl;
}
int main()
{
    cout<<score<<"in main"<<endl;
    int i=5;
    a(i);
    b(i);

    return 0;
}
