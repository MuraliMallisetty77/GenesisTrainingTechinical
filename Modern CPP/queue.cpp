#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<int> q1;
    queue<int> q2;        
    q1.push(10);
    q1.push(20);
    q1.push(30);
    q1.push(40);
    while(q1.empty()==false)
    {
        cout<<q1.front()<<" ";
        q1.pop();
    }

    return 0;
}