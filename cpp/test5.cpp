#include<iostream>
 class doctor
 {
    public:
    virtual void check()
    {
        std::cout<<" doctor checking";

    }

 };
 class dentist:public doctor
 {
    public:
    void check()
    {
        std::cout<<"dentist checking";
    }
    void root()
    {
        std::cout<<"Root canal";
    }

 };
class heart:public doctor
{
    public:
    void check()
    {
        std::cout<<"heart checking";
    }
    void hs()
    {
        std::cout<<"heart surgery";
    }
};

int main()
{
    // doctor *d=new dentist;
    // d->check();
    // dentist *dt=dynamic_cast<dentist*>(d);
    // dt->root();
    doctor *d=new heart();
    d->check();
    // dentist *dt=dynamic_cast<dentist*>(d);
    dentist *dt=static_cast<dentist*>(d);
    // heart *h=dynamic_cast<heart*>(d);
    if(dt!=0)
        //h->hs();
        dt->root();
    else
        std::cout<<"\nwrong";
    // dentist dt;
    // dt.check();
    // dt.root();
    // heart h;
    // h.check();
    // h.hs();
    // doctor d;
    // d.check();
    return 0;
}