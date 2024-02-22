#include<iostream>
#include<cstring>
#include"mobile.h"

Mobile::Mobile()
{
    strcpy(brand,"Realme");
    strcpy(model,"Gt");
    capacity=4000;
}
Mobile::Mobile(const char *b,const char *m,int c):capacity(c)
{
    strcpy(brand,b);
    strcpy(model,m);
}
Mobile::~Mobile()
{
    std::cout<<"\n~Mobile() called";
}
void Mobile::on()
{
    std::cout<<"\nMobile is on";
}

void Mobile::off()
{
    std::cout<<"\nMobile is off";
}
void Mobile::call()
{
    std::cout<<"\nMobile can make call";
}
void Mobile::display()
{
    std::cout<<"\nBrand:"<<brand<<" Model:"<<model<<" Capacity:"<<capacity;
}