#include<iostream>
using namespace std;

char getMaxOccCharacter(string s)
{
    int arr[26]={0};

    //creating array to count no. of characters

    for(int i=0;i<s.length();i++)
    {
        char ch=s[i];
        int number=0;
        if(ch>='a'&& ch<='z')
        {
                //lowercase
                number=ch-'a';
        }
        else
        {
            //uppercase
            number=ch-'A';
        }
        arr[number]++;
    }

    //find maximun occ of character
    
    int maxi=-1,ans=0;
    for(int i=0;i<26;i++)
    {
        if(maxi<arr[i])
        {
            ans=i;
            maxi=arr[i];
        }
    }

    char finalAns='a'+ans;
    return finalAns;
}

int main()
{
    string s;
    cin>>s;
    cout<<getMaxOccCharacter(s)<<endl;
}