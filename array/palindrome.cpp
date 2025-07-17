#include<iostream>
using namespace std;

//conversion of upper  case to lower case
char toLowercase(char ch)
{
    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp =ch-'A'+'a';
        return temp;
    }
}

//checking palindrome
bool checkPalindrome(char a[],int n){
    int s=0,e=n-1;
    while(s<=e){
        if(toLowercase(a[s])!= toLowercase(a[e]))
        {
            return 0;
        }
        else{
            s++;e--;
        }
    }
    return 1;
}

//reversing the string
void reverseString(char name[],int n)
{
    int s=0,e=n-1;
    while(s<e){
        swap(name[s++],name[e--]);
    }
}

//getting the length of the character
int getLength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
} 

int main()
{
     char name[20];
    cout<<"enter your name"<<endl;
    cin>>name;
    cout<<"your name is ";
    cout<<name<<endl;

    //getting length
     int len=getLength(name);
    cout<<"length: "<<len<<endl;

    //reversing the string
    reverseString(name,len);

    cout<<"your name is ";
    cout<<name<<endl;

    cout<<"palindrome or not: "<<checkPalindrome(name,len)<<endl;

}