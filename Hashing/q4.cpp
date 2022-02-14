//unorederd map
#include<iostream>
#include<unordered_map>
using namespace std;

int main()
{
    unordered_map<string , int>m;
    m["gfg"] = 20;
    m["ishan"] = 22;
    m.insert({"courses" , 15});
    for(auto x : m)
    {
        cout<<x.first<<" "<<x.second<<endl;
    }

    return 0;
}