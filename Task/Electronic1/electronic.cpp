#include<iostream>
#include"electronic.h"
#include<cstring>

ElectroncDevice::ElectroncDevice()
{
    strcpy(brand,"LG");
    strcpy(model,"Turbo drum");
}

ElectroncDevice::ElectroncDevice(const char *b, const char *m)
{
    strcpy(brand,b);
    strcpy(model,m);
}

ElectroncDevice::~ElectroncDevice()
{
    std::cout<<"\n~ElectronicDevice() called";
}

void ElectroncDevice::on()
{
    std::cout<<"\nElectronic device is on";
}

void ElectroncDevice::off()
{
    std::cout<<"\nElectronic deice is off";
}
void ElectroncDevice::display()
{
     std::cout<<"\nBrand:"<<brand<<" Model:"<<model;
}