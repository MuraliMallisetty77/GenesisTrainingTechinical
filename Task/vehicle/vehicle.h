#ifndef VEHICLE_H
#define VEHICLE_H

#include<iostream>
#include<cstring>

class Vehicle
{
    protected:
        char brand[20];
        char model[20];
        int year;
    public:
        Vehicle(const char *,const char *,int );
        virtual void drive();
        virtual void display();
        virtual ~Vehicle();

        int getYear() const { return year; }
        void setYear(int year_) { year = year_; }

        void setBrand(const char *b)
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

#endif // VEHICLE_H
