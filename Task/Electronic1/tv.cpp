#include<iostream>
#include<cstring>
#include"tv.h"
Tv::Tv()
{
    strcpy(brand,"MI");
    strcpy(model,"pavillion");
}

Tv::Tv(const char *b, const char *m,int s):size(s)
{
    strcpy(brand,b);
    strcpy(model,m);
}

Tv::~Tv()
{
    std::cout<<"\n~Tv() called";

}

void Tv::on()
{
    std::cout<<"\nTv is on";
}

void Tv::off()
{
    std::cout<<"\nTv is off";
}

void Tv::changeChannel()
{
    std::cout<<"\nChange channel";
}

void Tv::display()
{
    std::cout<<"\nBrand:"<<brand<<" Model:"<<model<<" Size:"<<size;
}
