#ifndef WASHINGMACHINE_H
#define WASHINGMACHINE_H

#include<iostream>
#include"electronic.h"
class WashingMachine:public ElectroncDevice
{
    public:
        WashingMachine();
        WashingMachine(const char*,const char*);
        ~WashingMachine();
        void washClothes();
        void on();
        void off();
        void display();

};

#endif // WASHINGMACHINE_H
