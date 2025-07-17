#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;

int  main()
{
    unordered_map<string, int> m;

    //insertion
    //way1
    pair<string, int> p = make_pair("apurv", 3);
    m.insert(p);

    //way2
    pair<string, int> q("love", 2);
    m.insert(q);

    //way3
    m["mera"] = 1;


    //search
    cout << m["mera"] << endl;
    cout << m.at("apurv") << endl;

    //size
    cout << m.size() << endl;
    //
    //iterator
    unordered_map<string, int>::iterator it = m.begin();

    while(it!=m.end()){
        cout << it->first << " " << it->second << endl;
        it++;

    }
    return 0;
}