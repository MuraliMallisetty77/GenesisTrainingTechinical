#include<iostream>
#include<set>
using namespace std;
int main()
{
    multiset<int> s;
    s.insert(10);
    s.insert(40);
    s.insert(30);
    s.insert(70);
    s.insert(2);
    s.insert(70);
    s.insert(2);
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    s.insert(s.begin(),60);
    multiset<int> m1(s.begin(),s.end());
    // s.insert(s.begin(),2);
   //s.erase(2);
    s.erase(s.begin(),s.find(2));
    cout<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    cout<<*s.lower_bound(30)<<endl;
    cout<<*s.upper_bound(60)<<endl;
    cout<<s.count(60);
    cout<<s.erase(2);
    return 0;
}