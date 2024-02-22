#include<iostream>
#include<map>
#include<vector>

using namespace std;

int main()
{
    
    map<int,int> m;
    m.insert({1,2});
    m.insert({2,3});
    m.insert({7,4});
    m.insert({4,5});
    m.insert({4,5});
    m.insert({5,4});
    m.insert({8,4});
    m.insert({5,5});
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // map<int,int> m1(m.begin(),m.end());
    
   // m.erase(++m.begin());

    // map<int,int>::iterator it=m.erase(m.begin(),m.find(7));
    // if(it==m.end())
    //     cout<<"not found";
    // else
    // {
    //     for(auto i=m.begin();i!=m.end();i++)
    //     {
    //         cout<<i->first<<" "<<i->second<<endl;
    //     }
    // }
    // for(auto i=m.begin();i!=m.end();i++)
    // {
    //     cout<<i->first<<" "<<i->second<<endl;
    // }
    // cout<<"              "<<endl;
    // for(auto i=m1.begin();i!=m1.end();i++)
    // {
    //     cout<<i->first<<" "<<i->second<<endl;
    // }

    // auto i=m.upper_bound(4);

    // cout<<i->first<<" "<<i->second;
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    // cout<<m.lower_bound(1)->first<<" "<<m.lower_bound(1)->second<<endl;
    // cout<<m.upper_bound(8)->first<<" "<<m.upper_bound(8)->second;

    


    return 0;
}
