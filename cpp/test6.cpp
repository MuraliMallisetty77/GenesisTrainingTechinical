#include<iostream>
class A
{
    int arr[20];
    public:
        void show()
        {
            std::cout<<"a";
        }

};

class B:virtual public A
{
    public:
        void show()
        {
            std::cout<<"b";
        }

};
class C:virtual public A
{

};
class D:public B,public C
{

};

int main()
{
    // C c1;
    D d;
    //c1.A::show();
    d.B::show();
    d.C::show();
    std::cout<<sizeof(d);

    return 0;
}