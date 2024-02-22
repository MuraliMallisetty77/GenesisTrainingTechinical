#include<iostream>
#include<stack>
using namespace std;
void findmax(int a[],int n)
{
    int arr[n];
    stack<int> s;
    for(int i=n-1;i>=0;i--)
    {
        while(!s.empty()&&a[i]>=s.top())
        {
            s.pop();
        }
        if(s.empty())
            arr[i]=-1;
        else
            arr[i]=s.top();

        s.push(a[i]);
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }

    // stack<int> s;
    // int next;
    // for(int i=0;i<n;i++)
    // {
    //     for(int j=i+1;j<n;j++)
    //     {
    //         next=-1;
    //         if(a[i]<a[j])
    //         {
    //             next=a[j];
    //             s.push(next);
    //             break;
    //         }
    //         else
    //             s.push(next);
            
    //     }
    // }

    // stack<int> s1;
    // while(!s.empty())
    // {
    //     s1.push(s.top());
    //     s.pop();
    // }
    // while(!s1.empty())
    // {
    //     cout<<s1.top()<<" ";
    //     s1.pop();
    // }
}

int main()
{
    stack<int> s;
    int arr[]={4,6,2,7,1};
    int n=sizeof(arr)/sizeof(int);
    findmax(arr,n);
    
}