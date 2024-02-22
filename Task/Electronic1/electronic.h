#ifndef ELECTRONIC_H
#define ELECTRONIC_H

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

#endif // ELECTRONIC_H
