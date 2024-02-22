#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    
    int arr[]={4,4,1,3};
    int *max=max_element(begin(arr),end(arr));
    int n=count(begin(arr),end(arr),*max);
    cout<<"largest:"<<*max<<endl;
    cout<<"times:"<<n;
    return 0;
}