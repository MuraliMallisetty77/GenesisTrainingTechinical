#include<iostream>
#include<queue>
using namespace std;
int main()
{
    priority_queue<int> q;
    q.push(2);
    q.push(1);
    q.push(10);
    q.push(3);
    q.push(15);
    while(!q.empty())
    {
        cout<<q.top()<<" ";
        q.pop();
    }
    // priority_queue<int,vector<int>,greater<int>> q;
    // q.push(2);
    // q.push(1);
    // q.push(10);
    // q.push(3);
    // q.push(15);
    // while(!q.empty())
    // {
    //     cout<<q.top()<<" ";
    //     q.pop();
    // }

    return 0;
}