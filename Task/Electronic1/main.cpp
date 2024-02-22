#include<iostream>
#include"mobile.h"
#include"washingmachine.h"
#include"tv.h"
int main()
{
    ElectroncDevice *e=new Mobile("oppo","f21",4500);
    Mobile *m=dynamic_cast<Mobile*>(e);
    e->on();
    if(m!=0)
       m->call();
    else
       std::cout<<"\ncasting not possible";
    e->display();
    e->off();

    ElectroncDevice *e1=new WashingMachine("LG","Turbodrum");
    WashingMachine *w=dynamic_cast<WashingMachine*>(e1);
    e1->on();
    if(w!=0)
      w->washClothes();
    else
    std::cout<<"\ncasting not possible";
    e1->display();
    e1->off();

    ElectroncDevice *e2=new Tv("Samsung","x24",32);
    Tv *t=dynamic_cast<Tv*>(e2);
    e2->on();
    if(w!=0)
      t->changeChannel();
    else
    std::cout<<"\ncasting not possible";
    e2->display();
    e2->off();

    delete e;
    delete e1;
    delete e2;
    return 0;
}