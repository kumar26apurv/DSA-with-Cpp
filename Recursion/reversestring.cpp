#include<iostream>
using namespace std;

int reverse(string& str, int i,int j)
{
    cout<<"call recieved for: "<<str<<endl;
    if(i>j){
        return -1;
    }
    swap(str[i],str[j]);
    i++;
    j--;

    reverse(str,i,j);
}

int main()
{
    string name="Apurv";

    int ans=reverse(name,0,name.length()-1);
    cout<<name<<endl;
}