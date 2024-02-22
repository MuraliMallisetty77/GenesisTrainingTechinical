#include<iostream>
#include<algorithm>
using namespace std;
bool isOdd(int &a)
{
    bool res=a%2!=0;
    std::cout<<"isOdd("<<a<<")"<<res<<endl;
    return res;
}
bool isPrime(int &a)
{
    //bool res=true;
    for(int i=2;i<=a/2;i++)
    {
        if(a%i==0)
        return false;
        // {
        //     res=false;
        //     break;
        // }
    }
    //return res;
    return true;
}
bool lessthanzero(int &a)
{
    return a<=0;
}

// bool isgreater(int ele,int k)
// {
//     return ele>=k;
// }

int main()
{
    int arr[]={12,34,3,6,55,8,7,2};
    //int n=count_if(begin(arr),end(arr),isPrime);
    //int a[]={-1,-3,1,2,1};
    //int n=count_if(begin(a),end(a),lessthanzero);
    // int n=count_if(begin(a),end(a),[](int &a){return a<=0;});//lambda expression
    // if(n<3)
    // cout<<"cancel"<<endl;
    // else
    // cout<<"not cancel"<<endl;
    int key;
    cout<<"enter key:";
    cin>>key;
    int n=count_if(begin(arr),end(arr),[=](int ele){return ele>=key;});
    cout<<n;

    //cout<<"values:"<<n;
}