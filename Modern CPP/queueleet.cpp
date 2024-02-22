#include<iostream>
#include<queue>
#include<stack>
using namespace std;

class MyStack 
{
    queue<int> q;
public:
    MyStack() 
    {
        
    }
    
    void push(int x) 
    {
        q.push(x);
    }
    
    int pop() 
    {
        queue<int> q2;
        while(q.size()!=1)
        {
            q2.push(q.front());
            q.pop();   
        }
        int n=q.front();
        q.pop();

        while(q2.empty()==false)
        {
            q.push(q2.front());
            q2.pop();
        }   
        return n;   
    }
    
    int top() 
    {
        int n;
        queue<int> q2;
        while(q.empty()==false)
        {
            q2.push(q.front());
            n=q.front();
            q.pop();  
        }
        
        while(q2.empty()==false)
        {
            q.push(q2.front());
            q2.pop();
        }   
        return n;
    }
    
    bool empty() 
    {
        return q.empty();
    }
};
int main()
{
    MyStack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);

    // cout<<s.pop()<<endl;
    // cout<<s.pop()<<endl;
    // cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;
    cout<<s.top()<<endl;
    cout<<s.pop()<<endl;






    return 0;
}