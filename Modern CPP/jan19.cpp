#include<iostream>
#include<vector>
using namespace std;

int minFallingPathSum(vector<vector<int>>& v) 
{
    int index,index1,index2;
    int val,val1,val2;
    int min=v[0][0];
    for(int i=0;i<v[0].size();i++)
    {
        if(min>v[0][i])
        {
            min=i;
        }
        val=min;
        index=min;
        break;
    }
    
    for(int i=1;i<v.size();i++)
    {
        for(int j=0;j<v[i].size();j++)
        {
            //if()
        }
    }


    return index;
    
}
int main()
{
    vector<vector<int>> v={{2,3,1},{6,5,4},{7,8,9}};
    cout<<minFallingPathSum(v);
    return 0;
}