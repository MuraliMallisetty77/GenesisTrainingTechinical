#ifndef FOUR_H
#define FOUR_H

#include<iostream>
#include"vehicle.h"
class FourWheeler:public Vehicle
{
    public:
        FourWheeler(const char *,const char *,int);
        void drive();
        void display();
        void Ac();
        ~FourWheeler();
};

#endif // FOUR_H
