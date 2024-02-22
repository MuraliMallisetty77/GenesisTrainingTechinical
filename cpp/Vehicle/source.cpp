#include<iostream>
#include"header.h"
#include<cstring>
//Vehicle class
Vehicle::Vehicle(const char *b,const char *m,int y):year(y)
{
    strcpy(brand,b);
    strcpy(model,m);
}
Vehicle::~Vehicle()
{
    std::cout<<"\n~vehicle() is called";
}
void Vehicle::drive()
{
    std::cout<<"\nVehicle is moving";
}
void Vehicle::display()
{
    std::cout<<"\nBrand:"<<brand<<" model:"<<model<<" Year:"<<year<<std::endl;
}

//Two wheeler class
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


//Four wheeler class
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


