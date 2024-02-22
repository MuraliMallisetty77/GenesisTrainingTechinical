#include<iostream>
#include<map>
#include<string>
#include<bits/stdc++.h>

using namespace std;

bool closeStrings(string word1, string word2) 
{
    // int arr1[26]={0};
    // int arr2[26]={0};
    // set<char> s1;
    // set<char> s2;
    // for(int i=0;i<word1.length();i++)
    // {
    //     arr1[word1[i]-'a']++;
    //     s1.insert(word1[i]);
    // }
    // for(int i=0;i<word2.length();i++)
    // {
    //     arr2[word1[i]-'a']++;
    //     s2.insert(word2[i]);
    // }

    // sort(begin(arr1),end(arr1));
    // sort(begin(arr2),end(arr2));
    // for(int i=0;i<26;i++)
    // {
    //     if(arr1[i]!=arr2[i])
    //         return false;
    // }

    // for(auto i=s1.begin(),j=s2.begin();i!=s1.end()&&j!=s2.end();i++,j++)
    // {
    //     if(*i!=*j)
    //         return false;
    // }

    // return true;
    
    // for(auto i:arr1)
    //     cout<<i<<" ";
    // cout<<endl;
    // for(auto i:arr2)
    //     cout<<i<<" ";


//by using map
     map<char,int> m1;
     map<char,int>m2;
     for(int i=0;i<word1.length();i++)
     {
        m1.insert({word1[i],0});
     }  

     for(int i=0;i<word2.length();i++)
     {
        m2.insert({word2[i],0});
     } 

     for(auto &i:m1)
     {
        for(int j=0;j<word1.length();j++)
        {
            if(i.first==word1[j])
            {
                i.second++;
            }

        }
     }

     for(auto &i:m2)
     {
        for(int j=0;j<word2.length();j++)
        {
            if(i.first==word2[j])
            {
                i.second++;
            }

        }
     }
     vector<int> v1;
     vector<int> v2;
     for(auto i:m1)
     {
        v1.push_back(i.second);
     }
     for(auto i:m2)
     {
        v2.push_back(i.second);
     }
     sort(v1.begin(),v1.end());
     sort(v2.begin(),v2.end());
    if(v1.size()==v2.size())
    {
        // for(auto i=v1.begin(),j=v2.begin();i!=v1.end() && j!=v2.end();i++,j++)
        // {
        //     if(*i!=*j)
        //         return false;
        // }
        for(int i=0;i<v1.size();i++)
        {
            if(v1[i]!=v2[i])
                return false;
        }
    }
    else
    {
        return false;
    }

    for(auto i=m1.begin(),j=m2.begin();i!=m1.end() && j!=m2.end();i++,j++)
    {
        if(i->first!=j->first)
             return false;
    }

     return true;      
}

int main()
{
    string s1="abc";
    string s2="bca";
    cout<<closeStrings(s1,s2);

    return 0;
}