#ifndef MOBILE_H
#define MOBILE_H

#include<iostream>
#include"electronic.h"

class Mobile:public ElectroncDevice
{
    int capacity;
    public:
        Mobile();
        Mobile(const char*,const char*,int);
        ~Mobile();
        void on();
        void off();
        void call();
        void display();

        int getCapacity() const { return capacity; }
        void setCapacity(int capacity_) { capacity = capacity_; }
};

#endif // MOBILE_H
