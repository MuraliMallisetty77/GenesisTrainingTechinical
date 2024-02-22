#include<set>
#include<iostream>
using namespace std;
class RandomizedSet 
{
    std::set<int> s;
public:
    RandomizedSet() 
    {
        
    }
    
    bool insert(int val) 
    {
        //set<int>::iterator it=s.find(val);
        if(s.find(val)==s.end())
        {
            s.insert(val);
            return true;
        }
        return false;  
    }
    
    bool remove(int val) 
    {
        //auto it=s.find(val);
        if(s.find(val)==s.end())
        {
            return false;
        }
        
        s.erase(val);
        return true;
    }
    
    int getRandom() 
    {
        int index=rand()%s.size();
        auto it=s.begin();
        advance(it,index);
        return *it;
    }
};
int main()
{
    RandomizedSet s;
    cout<<s.insert(1)<<endl;
    cout<<s.insert(2)<<endl;
    cout<<s.insert(3)<<endl;
    cout<<s.insert(4)<<endl;
    cout<<s.insert(5)<<endl;
    cout<<s.insert(6)<<endl;

   // cout<<s.remove(1)<<endl;
    cout<<s.getRandom();
    cout<<s.getRandom();

    return 0;
}