#include<iostream>
#include<algorithm>
using namespace std;
int fun(int a)
{
    return a;
}
int main()
{
    // int(*ptr)(int)=fun;
    // int(*lam)(int)=[](int a){return a;};
    // cout<<lam(10);
    auto add=[](auto a,auto b){return a+b;};
    cout<<add(2,3)<<endl;
    string s1="Venkata ";
    string s2="Murali";
    //cout<<add("Venkata ","Murali")<<endl;
    cout<<add(s1,s2)<<endl;

    return 0;
}