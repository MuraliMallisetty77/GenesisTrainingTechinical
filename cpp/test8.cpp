#include<iostream>
class A
{
    private :int x;
    public:int y;
    protected:int z;


};

class B:protected A
{
    public:
    void show()
    {
        y=10;
        z=20;
    }

};
class C:public B{
    public:
    void get()
    {
        y=20;
        z=10;
        
    }
};