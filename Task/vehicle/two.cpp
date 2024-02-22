#include<iostream>
#include"two.h"
#include<cstring>

TwoWheeler::TwoWheeler(const char *b,const char *m,int y):Vehicle(b,m,y) 
{
}
TwoWheeler::~TwoWheeler()
{
    std::cout<<"\n~Two wheeler() is called";
}
void TwoWheeler::drive()
{
    std::cout<<"\nTwo Wheeler is moving";
}
void TwoWheeler::display()
{
    std::cout<<"\nBrand:"<<brand<<" model:"<<model<<" Year:"<<year<<std::endl;
}
