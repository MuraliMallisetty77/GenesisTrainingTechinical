#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
bool uniqueOccurrences(vector<int>& arr) 
{
    map<int,int> m;
    for(auto i:arr)
    {
        m.insert({i,0});
    }

    for(auto &i:m)
    {
        for(auto it:arr)
        {
            if(i.first==it)
            {
                i.second++;
            }
        }
    }
    // cout<<"map after:"<<endl;
    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
    
    //by using set
    set<int> s;
    for(auto i:m)
    {
        if(s.find(i.second)==s.end())
            s.insert(i.second);
        else
         return false;
    }

    //by using vector
    // vector<int> v;
    // cout<<"\nvector"<<endl;
    // for(auto i:m)
    // {
    //     v.push_back(i.second);
    // }
    // for(auto i:v)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;

    // auto it=v.begin();
    // for(auto i=v.begin()+1;i!=v.end();i++)
    // {
    //     if(*it==*i)
    //         return false;
    // }

    // for(auto i:m)
    // {
    //     cout<<i.first<<" "<<i.second<<endl;
    // }
   

   return true;     
}
int main()
{
    vector<int> v{1,2,2,1,1,3};
    if(uniqueOccurrences(v))
        cout<<"true";
    else
        cout<<"false" ;

    return 0;
}