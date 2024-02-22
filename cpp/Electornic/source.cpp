#include<iostream>
#include"header.h"
#include<cstring>
//Electronc Device
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



//Mobile
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

//Washing machine
WashingMachine::WashingMachine()
{
    strcpy(brand,"Samsung");
    strcpy(model,"Turbo");

}

WashingMachine::WashingMachine(const char *b, const char *m)
{
    strcpy(brand,b);
    strcpy(model,m);
}

WashingMachine::~WashingMachine()
{
    std::cout<<"\n~Washing machine() called";
}

void WashingMachine::washClothes()
{
    std::cout<<"\nWashing clothes";
}

void WashingMachine::on()
{
    std::cout<<"\nWashin machine is on";
}

void WashingMachine::off()
{
    std::cout<<"\nWashin machine is off";
}

void WashingMachine::display()
{
     std::cout<<"\nBrand:"<<brand<<" Model:"<<model;
}

//TV
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
