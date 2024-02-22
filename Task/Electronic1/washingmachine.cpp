#include<iostream>
#include<cstring>
#include"washingmachine.h"

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