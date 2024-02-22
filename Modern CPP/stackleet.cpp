#include<iostream>
#include<stack>
#include<vector>
#include<algorithm>
using namespace std;
//EQUAL STACKS
void display(stack<int> s)
{
    while(s.empty()==false)
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
int sum(stack<int> s)
{
    int sum=0;
    while(s.empty()==false)
    {
        sum+=s.top();
        s.pop();
    }
    return sum;
}
int main()
{
    int arr1[]={1,2,1,1};
    int arr2[]={1,1,2};
    int arr3[]={1,1};

    stack<int> s1;
    stack<int> s2;
    stack<int> s3;
    for(int i=sizeof(arr1)/sizeof(int)-1;i>=0;i--)
    {
        s1.push(arr1[i]);
    }
    //display(s1);
    for(int i=sizeof(arr2)/sizeof(int)-1;i>=0;i--)
    {
        s2.push(arr2[i]);
    }
    //display(s2);
    for(int i=sizeof(arr3)/sizeof(int)-1;i>=0;i--)
    {
        s3.push(arr3[i]);
    }
    //display(s3);
    int sum1=sum(s1);
    int sum2=sum(s2);
    int sum3=sum(s3);
    //cout<<sum1<<" "<<sum2<<" "<<sum3;

    int ans;
    while(!s1.empty() && !s2.empty() && !s3.empty())
    {
        int max_h=max(sum1,max(sum2,sum3));
        //cout<<max_h<<endl;
        if((sum1==sum2) && (sum2==sum3))
        {
            ans=sum1;
            break;
        }
        else if(sum1==max_h && !s1.empty())
        {
            sum1-=s1.top();
            s1.pop();
        }
        else if(sum2==max_h && !s2.empty())
        {
            sum2-=s2.top();
            s2.pop();
        }
        else 
        {
            sum3-=s3.top();
            s3.pop();
        }
       
    }
    cout<<ans;
    return 0;

}


// int main()
// {
//     vector<int> v={1,2,3};
//     int key;
//     cout<<"Enter key:";
//     cin>>key;
//     int count;
//     for(auto i=v.begin();i!=v.end()-1;i++)
//     {
//         count=1;
//         for(auto j=i+1;j!=v.end();j++)
//         {
//             count+1;
//             cout<<"i="<<*i<<endl;
//             cout<<"J="<<*j<<endl;
//             int sum=0;
//             sum=sum+(*i)+(*j);
//             cout<<"sum:"<<sum<<endl;
//             if(sum==key)
//             {
//                 break;
//             }
//         }
//     }
//     cout<<"\ncount:"<<count;

//     return 0;
// }