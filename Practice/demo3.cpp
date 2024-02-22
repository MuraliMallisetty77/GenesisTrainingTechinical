#include<iostream>

template<typename ...T>
int add(T... n1)
{
    return (n1+...);
}

template<typename T,typename... Args>
T sub(Args... a)
{
    return (... - a);
}


int main()
{
    std::cout<<add(10,20,30)<<"\n";
    std::cout<<sub<int>(10,20,30);
}