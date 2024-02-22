#include<iostream>
#include<algorithm>
using namespace std;
//sort uses insertion sort or quick sort



// bool compare(int &a,int &b)
// {
//     return a>b;
// }
bool compare(string &a,string &b)
{
    return a>b;
}
int main()
{
    int a[]={9,3,10,2};
    cout<<"\nbefore\n";
    for(int ele:a)
    {
        cout<<ele<<" ";
    }
    
    // sort(begin(a),end(a));
    sort(begin(a),end(a),compare);
    cout<<"\nafter\n";
    for(int ele:a)
    {
        cout<<ele<<" ";
    }


    string names[]={"murali","varma","uday"};
    cout<<"\nbefore\n";
    for(string ele:names)
    {
        cout<<ele<<" ";
    }
    
    //sort(begin(names),end(names));
    sort(begin(names),end(names),compare);
    cout<<"\nafter\n";
    for(string ele:names)
    {
        cout<<ele<<" ";
    }


    return 0;
}