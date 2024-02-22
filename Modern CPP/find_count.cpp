#include <iostream>
#include<algorithm>
using namespace std;
//find,count,binary_search,lower_bound,upper_bound
int main() 
{
    // int arr[]={2,5,8,4,8,7};
    // int key;
    // cout<<"Enter key to serach:";
    // cin>>key;
    // int *ptr=find(begin(arr),end(arr),key);//find-linear search



    // string s[]={"Murali","varma","Ravi","chandra"};
    // string key;
    // cout<<"Enter key";
    // cin>>key;
    // string *str=find(begin(s),end(s),key);
    // if(str==end(s))
    // cout<<"\nnot found";
    // else
    // {
    //     int index=str-s;
    //     cout<<"\n"<<*str<<"element found"<<index;
    // }



    // sort(begin(arr),end(arr));
    // bool res=binary_search(begin(arr),end(arr),key);//binary search
    // if(res==false)
    // std::cout<<"not found";
    // else
    // std::cout<<"found";



    // int ptr=count(begin(arr),end(arr),key);//count-no.of occurances
    // if(ptr==0)
    // cout<<"\nnot found";
    // else
    // cout<<"\nelement found:"<<ptr;
    //std::cout << "Hello world!";



    //upper_bound-returns next address
    //lower_bound-returns same address
    // int arr[]={12,21,23,34,34,54};
    // int *ptr=upper_bound(begin(arr),end(arr),34);//basically it gives the address of next element of key element last occurence
    // //for example here we need to find the 34 address but it gives 54 address 
    // cout<<ptr;
    // cout<<*(ptr-1);
    // cout<<(ptr-1)-arr;


    //Binary serach by using upper bound and lower bound
    // int arr[]={12,21,34,34,45,56,67,78};
    // int key;
    // cout<<"Enter key:";
    // cin>>key;
    // bool res=binary_search(begin(arr),end(arr),key);
    // if(res==false)
    // {
    //     cout<<"\nelement not found";
    // }
    // else
    // {
    //     int *uprptr=upper_bound(begin(arr),end(arr),key);
    //     cout<<"\nupper Index:"<<(uprptr-1)-arr;
    //     int *lowptr=lower_bound(begin(arr),end(arr),key);
    //     cout<<"\nlower index:"<<lowptr-arr;
    // }



    int arr[]={12,23,34,56,56,56,78};//sorted array
    //int arr[]={34,87,12,90,34,34};//unsorted array
    int key;
    cout<<"Enterr key:";
    cin>>key;
    int n=count(begin(arr),end(arr),key);//count-no.of occurances
    int *uprptr=upper_bound(begin(arr),end(arr),key);//we can use in sorted array for correct answer
    int *lowptr=lower_bound(begin(arr),end(arr),key);
    cout<<n<<endl;
    cout<<uprptr-lowptr;
    // if(ptr==0)
    // cout<<"\nnot found";
    // else
    // cout<<"\nelement found:"<<ptr;
    
    return 0;
}