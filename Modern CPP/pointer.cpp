#include<vector>
#include<iostream>
#include<string>
using namespace std;
int main()
{
//     const int a=10;
//     const int& b=a;
//     // a=20;
//     // b=30;
//     cout<<a<<endl;
//     cout<<b<<endl;
    int arr[3][2]={{10,20},{30,40},{50,60}};
    int (*ptr)[2]=arr;
    //ptr+1;
    // (*ptr)+1;
    // (*ptr)+1;
    // (*ptr)+1;
    ptr++;
    int *p=*ptr+1;
    //cout<<*ptr;
    
    // auto p=ptr;
    // auto p1=*ptr;
    // p++;
    // p1++;
    // p1++;
    // p++;
    cout<<*p;
   // cout<<*(*(ptr)+1)<<endl;
    // cout<<*p1<<endl;
    // for(int i=0;i<3;i++)
    // {
    //     for(int j=0;j<2;j++)
    //     {
    //         //cout<<ptr[i][j]<<" "; 
    //         //cout<<*(*(ptr+i)+j)<<" ";
    //         cout<<*(*(ptr)+j)<<" ";       
    //     }
    //     cout<<endl;
    // }

    // int a=10;
    // int b=20;
    // int *p[3]={&a,&b};
    // int **q=p;
    // q++;
    // cout<<*(*q);
 
  // char ch[]="lkjh";
    // ch[1]='h';
    //const char *ptr="hello";
    // ptr="kjh"; 
    // const char *const ptr1="sam";
    // cout<<*ptr1;
    // char *const ptr2="NB";
 
    // const int a=10;
    // const int &b=a;   
    // cout<<typeid(ptr).name();
    // auto &p=a;
    // cout<<p;
    return 0;
}