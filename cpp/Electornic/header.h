#ifndef HEADER_H
#define HEADER_H
#include<iostream>
#include<cstring>
class ElectroncDevice
{
    protected:
        char brand[20];
        char model[20];
    public:
        ElectroncDevice();
        ElectroncDevice(const char*,const char*);
        virtual ~ElectroncDevice();
        virtual void on();
        virtual void off();
        virtual void display();
        void setBrand(const char* b)
        {
            strcpy(brand,b);
        }
        char *getBrand()
        {
            return brand;
        }
        
        void setModel(const char* m)
        {
            strcpy(model,m);
        }
        char *getModel()
        {
            return model;
        }       
};

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

#endif // HEADER_H
