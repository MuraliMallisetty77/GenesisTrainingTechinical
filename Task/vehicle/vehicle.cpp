#include<iostream>
#include"vehicle.h"
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