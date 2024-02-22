#ifndef TWO_H
#define TWO_H

#include<iostream>
#include"vehicle.h"
class TwoWheeler:public Vehicle
{
    public:
        TwoWheeler(const char *,const char *,int);
        void drive();
        void display();
        ~TwoWheeler();
};

#endif // TWO_H
