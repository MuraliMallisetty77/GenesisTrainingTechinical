#include<iostream>
#include<stack>
#include<algorithm>
#include<string>
#include<cstring>
using namespace std;
//size,push,pop,top,empty
void display(stack<string> s)
{
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }

}
int main()
{
    stack<string> s;
    // s.push("Murali");
    // s.push("ravi");
    // s.push("varma");
    // s.push("uday");
    string n[]={"Murali","ravi","varma","uday"};
    for(int i=(sizeof(n)/sizeof(string))-1;i>=0;i--)
    {
        s.push(n[i]);
    }
    display(s);

    // // for(string e:s)
    // // {                    //it is not possible
    // //     cout<<e;
    // // }

    // while(s.empty()==false)
    // {
    //     cout<<s.top()<<endl;
    //     s.pop();
    // }

/*Hacker rank question*/
//checking symbols
    // stack<char> s;
    // string n;
    // cout<<"\nEnter string:";
    // getline(cin,n);
    // int flag=1;
    // for(int i=0;i<n.size();i++)
    // {
    //     if(n[i]=='{'||n[i]=='['||n[i]=='(')
    //         s.push(n[i]);
    //     else if((n[i]==']' && s.top()=='[') ||(n[i]==')' && s.top()=='(') ||(n[i]=='}' && s.top()=='{') )
    //         s.pop(); 
    // }
    // if(s.empty())
    // {
    //     cout<<"yes";
    // }
    // else   
    //     cout<<"no";


//if string contins space remove all elements from stack

    //     string s="today is the thursday";
    //     stack<char> st;
    //     for(int i=0;i<=s.size();i++)
    //     {
    //         if(s[i]==' ')
    //         {
    //             while(st.empty()==false)
    //             {
    //                 cout<<st.top();
    //                 st.pop();
    //             }
    //             cout<<" ";
    //             //st.push(s[i]);
    //         }
    //         else 
    //         {
    //             st.push(s[i]);
    //         }    
    //     }
    //     while(st.empty()==false)
    //     {
    //         cout<<st.top();
    //         st.pop();
    //     }
                                //OR
    // string s;
    // cout<<"Enter string:";
    // getline(cin,s);
    // stack<char> st;
    // for(int i=0;i<=s.size();i++)
    // {
    //     if(s[i]!=' ')
    //     {
    //         st.push(s[i]);
    //     }
    //     else 
    //     {
    //         while(st.empty()==false)
    //         {
    //             cout<<st.top();
    //             st.pop();
    //         }
    //         cout<<" ";
    //     }
       
    // }
    
    // while(st.empty()==false)
    // {
    //     cout<<st.top();
    //     st.pop();
    // }



    return 0;
}
