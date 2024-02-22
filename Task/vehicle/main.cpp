#include<iostream>
#include"two.h"
#include"four.h"

int main()
{
    Vehicle *v=new TwoWheeler("Yamaha","R15",2020);
    v->drive();
    v->display();

    Vehicle *v1=new FourWheeler("Maruti suzuki","Baleno",2023);
    FourWheeler *f=dynamic_cast<FourWheeler*>(v1);
    v1->drive();
    f->Ac();
    v1->display();

    delete v;
    delete v1;
    return 0;
}
