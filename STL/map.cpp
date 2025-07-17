#include<iostream>
#include<map>

using namespace std;
int main()
{
    map<int,string> m;

    m[1]="apurv";
    m[13]="kumar";
    m[2]="gupta";

    m.insert({5,"adhqjek"});

    cout<<"before erase"<<endl;
    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }
    cout<<"present or not"<<m.count(3)<<endl;

    m.erase(13);
    cout<<"after erase"<<endl;
    for(auto i:m){
        cout<<i.first<<i.second<<endl;
    }

    auto it=m.find(5);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
}