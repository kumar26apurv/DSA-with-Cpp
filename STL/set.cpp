#include<iostream>
#include<set>

using namespace std;
int main()
{
    set<int> s;

    s.insert(7);
    s.insert(4);
    s.insert(9);
    s.insert(0);

    for(int i:s){
        cout<<i<<" ";
    }cout<<endl;

    set<int>::iterator it=s.begin();
    it++;
    
    s.erase(it);

    for(auto i:s){
        cout<<i<<endl;
    }

    cout<<"5 is preset or not"<<s.count(5)<<endl;

    set<int>::iterator itr=s.find(7);

    cout<<"value preset at"<<*it<<endl;
}