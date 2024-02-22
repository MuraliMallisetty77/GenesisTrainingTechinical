#include<iostream>
#include"four.h"
#include<cstring>
FourWheeler::FourWheeler(const char *b,const char *m,int y):Vehicle(b,m,y) 
{
}
FourWheeler::~FourWheeler()
{
    std::cout<<"\n~Four wheeler() is called";
}
void FourWheeler::drive()
{
    std::cout<<"\nFour Wheeler is moving";
}
void FourWheeler::display()
{
    std::cout<<"\nBrand:"<<brand<<" model:"<<model<<" Year:"<<year<<std::endl;
}

void FourWheeler::Ac()
{
    std::cout<<"\nAc is working";
}
