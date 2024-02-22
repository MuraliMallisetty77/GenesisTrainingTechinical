#include<iostream>
#include<vector>
using namespace std;
vector<int> twoSum(vector<int>& v, int target) 
    {
        vector<int> n;
        // for(int i=0;i<v.size();i++)
        // {
        //     if((v[i]+v[i+1])==target)
        //     {
        //         n.push_back(i);
        //         n.push_back(i+1);
        //     }

        // }
        
        for(auto i=v.begin();i!=v.end();i++)
        {
            for(auto j=i+1;j!=v.end();j++)
            {
                if((*i+*j)==target)
                {
                    n.push_back(i-v.begin());
                    n.push_back(j-v.begin());
                }
            }
        }
        return n;
        
    }

int main()
{
    vector<int> v={2,7,11,15};
    int t=9;
    vector<int> n=twoSum(v,t);
    for(auto i:n)
            cout<<i<<" ";
    return 0;
}