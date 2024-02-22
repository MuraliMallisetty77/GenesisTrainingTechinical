#include<iostream>
#include<map>
using namespace std;
int main()
{
    multimap<int,int> m;
    m.insert({1,20});
    m.insert({2,20});
    m.insert({3,20});
    m.insert({1,20});
    m.insert({2,20});
    m.insert({3,30});
    auto it=m.equal_range(3);
    for(auto i=it.first;i!=it.second;i++)
    {
        cout<<i->first<<" "<<i->second<<endl;
    }

    // auto it=m.find(3);
    // cout<<it->first<<" "<<it->second;
    //cout<<m.upper_bound(3)->first<<" "<<m.upper_bound(3)->second;
    // for(pair<int,int> i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // multimap<int,int,greater<int>> m1=m;
    // cout<<endl;
    // for(auto i:m1)
    // {
    //      cout<<i.first<<" "<<i.second<<endl;
    // }


    return 0;
}