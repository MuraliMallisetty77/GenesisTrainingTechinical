#include<iostream>
#include<vector>
#include<map>
using namespace std;
vector<vector<int>> score(vector<vector<int>> &vect)
{
    map<int,int> m;
    vector<int>ans1;
    vector<int> ans2;
    vector<vector<int>> v;
    for (int i = 0; i < vect.size(); i++)  
    { 
        for (int j = 0; j < vect[i].size(); j++) 
        { 
            m.insert({vect[i][j],0});
        }       
    } 

    // for(auto i=m.begin();i!=m.end();i++)
    // {
    //     cout<<i->first<<" "<<i->second<<endl;
    // }

    for(auto it=m.begin();it!=m.end();it++)
    {
        for (int i = 0; i < vect.size(); i++)  
        { 
            for (int j = 0; j < vect[i].size(); j++) 
            { 
                if(it->first==vect[i][j+1])
                    it->second++;
            }         
        } 
    }
                    //ALTERANTE

    // for(int i=0;i<vect.size();i++)
    // {
    //     m[vect[i][1]]++;
    // }

    // for(auto i=m.begin();i!=m.end();i++)
    // {
    //     cout<<i->first<<" "<<i->second<<endl;
    // }

    for(auto it=m.begin();it!=m.end();it++)
    {
        if(it->second==0)
        {
            ans1.push_back(it->first);
        }
        else if(it->second==1)
         ans2.push_back(it->first);
    }

    v.push_back(ans1);
    v.push_back(ans2);

    // cout<<"zero loss vector:";
    // for(int i:ans1)
    // {
    //     cout<<i<<" ";
    // }
    // cout<<endl;
    // cout<<"one loss vector:";
    // for(int i:ans2)
    // {
    //     cout<<i<<" ";
    // }


    return v;
}

int main()
{
    vector<vector<int>> vect={{1,3},{2,3},{3,6},{5,6},{5,7},{4,5},{4,8},{4,9},{10,4},{10,9}};
    vector<vector<int>> v=score(vect);
    for(int i=0;i<v.size();i++)
    {
        
        for(int j=0;j<v[i].size();j++)
        {
            cout<<v[i][j]<<" ";
        }
        cout<<endl;
    }
    

    return 0;
}