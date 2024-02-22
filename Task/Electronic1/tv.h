#ifndef TV_H
#define TV_H

#include<iostream>
#include"electronic.h"

class Tv:public ElectroncDevice
{
    int size;
    public:
        Tv();
        Tv(const char*,const char*,int);
        ~Tv();
        void on();
        void off();
        void changeChannel();
        void display();

        int getSize() const { return size; }
        void setSize(int size_) { size = size_; }
};

#endif // TV_H
