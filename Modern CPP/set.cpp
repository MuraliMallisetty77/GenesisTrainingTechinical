#include<iostream>
#include<set>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    set<string> s;
    s.insert("Murali");
    s.insert("varma");
    s.insert("chandra");
    s.insert("ravi");
    set<string> s2(s.begin(),s.end());
    for(auto i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    s.insert(s.begin(),"hanuman");
    cout<<endl;
    for(auto i:s2)
    {
        cout<<i<<" ";
    }
    set<string> s3={"vijay","umar"};
    s.insert(s3.begin(),s3.end());
     cout<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    // s.erase(s.find("ravi"),s.end());
    // cout<<endl;
    // for(auto i:s)
    // {
    //     cout<<i<<" ";
    // }
    cout<<endl;
    cout<<*s.lower_bound("ravi");
    cout<<*s.upper_bound("ravi");
    s.swap(s2);
    cout<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }



    return 0;
}